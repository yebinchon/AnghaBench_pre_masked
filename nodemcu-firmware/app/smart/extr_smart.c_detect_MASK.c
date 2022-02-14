
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint16_t ;
typedef int uint16 ;
struct RxControl {int dummy; } ;
typedef int int16_t ;
typedef int buf ;
struct TYPE_5__ {int flag_match_num; int base_len; int* flag; int cur_base_seq; int base_seq_valid; int ssid_len; int pwd_len; int addr; } ;
struct TYPE_4__ {int password; int ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int*) ;
 char* VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int * VAR_22 ;
 int VAR_23 ;
 TYPE_2__** VAR_24 ;
 int* VAR_25 ;
 int* VAR_26 ;
 TYPE_2__* VAR_27 ;
 scalar_t__ FUNC_3 (int ,int*,int ) ;
 int FUNC_4 (int ,int*,int ) ;
 int FUNC_5 (int *) ;
 int* VAR_28 ;
 scalar_t__ FUNC_6 (int*,int,int ,int*) ;
 int FUNC_7 () ;
 int VAR_29 ;
 int* VAR_30 ;
 TYPE_1__* VAR_31 ;

void FUNC_8(uint8 *VAR_32, uint16 VAR_33){
  uint16_t VAR_34;
  int16_t VAR_35 = 0;
  uint16_t VAR_36 = 0, VAR_37 = 0;
  int16_t VAR_38 = 0;
  uint8 *VAR_39 = ((void*)0);
  if( VAR_33 == 12 ){
    return;
  } else if (VAR_33 >= 64){
    VAR_39 = VAR_32 + sizeof(struct RxControl);
  } else {
    return;
  }
  if( ( (VAR_39[0]) & VAR_21) != VAR_22){
    return;
  }
  if( (VAR_39[1] & VAR_7) != VAR_13 )
    return;
  if( VAR_39[VAR_17] & (0xF != 0) )
    return;

  VAR_34 = VAR_39[VAR_17+1];
  VAR_34 = VAR_34<<4;
  VAR_34 += VAR_39[VAR_17]>>4;

  if(!VAR_27){
    int VAR_40;
    for (VAR_40 = 0; VAR_40 < VAR_0; VAR_40++)
    {
      if ( VAR_24[VAR_40]->flag_match_num == 0 ){
        if ( VAR_33 - VAR_24[VAR_40]->base_len == VAR_24[VAR_40]->flag[0])
        {

          FUNC_4(VAR_24[VAR_40]->addr, &VAR_39[VAR_2], VAR_1);
          VAR_24[VAR_40]->flag_match_num++;
          VAR_24[VAR_40]->cur_base_seq = VAR_34;
          VAR_24[VAR_40]->base_seq_valid = 1;

        }
        break;
      }
      else if(0 == FUNC_3(VAR_24[VAR_40]->addr, &VAR_39[VAR_2], VAR_1)){
        if(VAR_24[VAR_40]->base_seq_valid == 0){
          if ( VAR_33 - VAR_24[VAR_40]->base_len == VAR_24[VAR_40]->flag[0]) {

            VAR_24[VAR_40]->cur_base_seq = VAR_34;
            VAR_24[VAR_40]->base_seq_valid = 1;

          }
          break;
        }


        if(VAR_34 >= VAR_24[VAR_40]->cur_base_seq){
          VAR_35 = VAR_34 - VAR_24[VAR_40]->cur_base_seq;
        } else {
          VAR_35 = VAR_18 - VAR_24[VAR_40]->cur_base_seq + VAR_34;
        }

        if(VAR_35 < 0){
          VAR_24[VAR_40]->base_seq_valid = 0;
          break;
        }

        if(VAR_35 == 0){
          if ( VAR_33 - VAR_24[VAR_40]->base_len != VAR_24[VAR_40]->flag[0]) {
            VAR_24[VAR_40]->base_seq_valid = 0;
          }
          break;
        }


        if (VAR_35>=VAR_9){
          VAR_24[VAR_40]->flag_match_num = 1;
          if ( VAR_33 - VAR_24[VAR_40]->base_len == VAR_24[VAR_40]->flag[0]) {

            VAR_24[VAR_40]->cur_base_seq = VAR_34;
            VAR_24[VAR_40]->base_seq_valid = 1;
          } else {
            VAR_24[VAR_40]->base_seq_valid = 0;
          }
          break;
        }




        if ( (VAR_24[VAR_40]->flag_match_num==VAR_35) && ( (VAR_24[VAR_40]->flag[VAR_24[VAR_40]->flag_match_num]==VAR_33-VAR_24[VAR_40]->base_len) || (VAR_24[VAR_40]->flag[VAR_24[VAR_40]->flag_match_num]==0) ) ){

          VAR_24[VAR_40]->flag_match_num++;
          if(VAR_24[VAR_40]->flag_match_num == VAR_8){
            FUNC_2("Smart: got matched sender\n");
            VAR_27 = VAR_24[VAR_40];
            VAR_27->base_seq_valid = 0;
            FUNC_5(&VAR_29);
          }
          break;
        }


        VAR_24[VAR_40]->flag_match_num = 1;
        VAR_24[VAR_40]->base_seq_valid = 0;
        break;
      }
    }

    goto end;
  } else {
    if(0 != FUNC_3(VAR_27->addr, &VAR_39[VAR_2], VAR_1)){
      return;
    }
    if (VAR_27->base_seq_valid == 0){

      if (VAR_33 - VAR_27->base_len == VAR_20){
        VAR_27->cur_base_seq = VAR_34;
        VAR_27->base_seq_valid = 1;
      }
      goto end;
    }

    if(VAR_34 >= VAR_27->cur_base_seq){
      VAR_35 = VAR_34 - VAR_27->cur_base_seq;
    } else {
      VAR_35 = VAR_18 - VAR_27->cur_base_seq + VAR_34;
    }

    if(VAR_35 < 0){
      VAR_27->base_seq_valid = 0;
      goto end;
    }

    if(VAR_35 == 0){
      if ( VAR_33 - VAR_27->base_len != VAR_20) {
        VAR_27->base_seq_valid = 0;
      }
      goto end;
    }

    if ( VAR_35 > (VAR_16 + 1)*(1+VAR_12*VAR_27->ssid_len) + 1 + (VAR_16 + 1)*(1+VAR_12*VAR_27->pwd_len) ){


      if (VAR_33 - VAR_27->base_len == VAR_20){
        VAR_27->cur_base_seq = VAR_34;
        VAR_27->base_seq_valid = 1;
      } else {
        VAR_27->base_seq_valid = 0;
      }
      goto end;
    }


    if (VAR_35==1){
      int16_t VAR_41 = VAR_33 - VAR_27->base_len - VAR_10;
      if ( VAR_27->ssid_len == 0 ){
        if ( (VAR_41 <=32) && (VAR_41 >0) ){
          VAR_27->ssid_len = VAR_41;
          FUNC_1("Smart: found the ssid_len %d\n", VAR_27->ssid_len);
        }
        goto end;
      }
      if (VAR_41 != VAR_27->ssid_len){
        VAR_27->base_seq_valid = 0;

        VAR_27->ssid_len = VAR_41;
        FUNC_1("Smart: ssid_len not match\n");
      }
      goto end;
    }

    if( (VAR_16==2)&&(VAR_35==2 || VAR_35==3) ) {
      if (VAR_33 - VAR_27->base_len != VAR_27->flag[VAR_35-2+VAR_15]){
        VAR_27->base_seq_valid = 0;
        FUNC_1("Smart: SEP-L not match\n");
      }
      goto end;
    }

    if( VAR_35==(VAR_16 + 1)*(1+VAR_12*VAR_27->ssid_len) + 1) {
      if (VAR_33 - VAR_27->base_len != VAR_14){
        VAR_27->base_seq_valid = 0;
        FUNC_1("Smart: PWD_FLAG not match\n");
      }
      goto end;
    }

    if (VAR_35==(VAR_16 + 1)*(1+VAR_12*VAR_27->ssid_len) + 1 + 1){
      int16_t VAR_42 = VAR_33 - VAR_27->base_len - VAR_10;
      if ( VAR_27->pwd_len == 0){
        if ( (VAR_42 <=64) && (VAR_42>0)){
          VAR_27->pwd_len = VAR_42;
          FUNC_1("Smart: found the pwd_len %d\n", VAR_27->pwd_len);
        }
        goto end;
      }
      if (VAR_42 != VAR_27->pwd_len){
        VAR_27->base_seq_valid = 0;

        VAR_27->pwd_len = VAR_42;
        FUNC_1("Smart: pwd_len not match\n");
      }
      goto end;
    }

    if (VAR_35 <= (VAR_16 + 1)*(1+VAR_12*VAR_27->ssid_len) ){
      uint16_t VAR_43 = (VAR_35-1-VAR_16-1) / (VAR_16 + 1);
      uint16_t VAR_44 = (VAR_35-1-VAR_16-1) % (VAR_16 + 1);
      switch(VAR_44){
        case 0:
          VAR_38 = (int16_t)(VAR_33 - VAR_27->base_len - VAR_5);
          if (VAR_38>255 || VAR_38<0){
            VAR_27->base_seq_valid = 0;
            FUNC_1("Smart: wrong ssid nibble\n");
            goto end;
          }
          VAR_36 = VAR_43 / 8;
          VAR_37 = VAR_43 % 8;
          if( (VAR_26[VAR_36] & (0x1 << VAR_37)) == 0){
            VAR_26[VAR_36] |= 0x1 << VAR_37;
            VAR_30[VAR_43] = VAR_38;
          }
          break;
        case 1:
        case 2:
          if(VAR_33 - VAR_27->base_len != VAR_27->flag[VAR_44-1+VAR_15]){
            FUNC_1("Smart: SEP-S not match\n");
            VAR_27->base_seq_valid = 0;
            goto end;
          }
          break;
        default:
          break;
      }
    } else {
      uint16_t VAR_45 = (VAR_35 -1 -(VAR_16 + 1)*(1+VAR_12*VAR_27->ssid_len) - 2 - VAR_16) / (VAR_16 + 1);
      uint16_t VAR_46 = (VAR_35 -1 -(VAR_16 + 1)*(1+VAR_12*VAR_27->ssid_len) - 2 - VAR_16) % (VAR_16 + 1);
      switch(VAR_46){
        case 0:
          VAR_38 = (int16_t)(VAR_33 - VAR_27->base_len - VAR_5);
          if (VAR_38>255 || VAR_38<0){
            VAR_27->base_seq_valid = 0;
            FUNC_1("Smart: wrong password nibble\n");
            goto end;
          }
          VAR_36 = VAR_45 / 8;
          VAR_37 = VAR_45 % 8;
          if( (VAR_25[VAR_36] & (0x1 << VAR_37)) == 0){
            VAR_25[VAR_36] |= 0x1 << VAR_37;
            VAR_28[VAR_45] = VAR_38;
          }
          break;
        case 1:
        case 2:
          if(VAR_33 - VAR_27->base_len != VAR_27->flag[VAR_46-1+VAR_15]){
            FUNC_1("Smart: SEP-P not match\n");
            VAR_27->base_seq_valid = 0;
            goto end;
          }
          break;
        default:
          break;
      }
    }



    int VAR_47,VAR_48;
    for(VAR_47=0;VAR_47<VAR_12*VAR_27->ssid_len;VAR_47++){
      VAR_36 = (VAR_47) / 8;
      VAR_37 = (VAR_47) % 8;
      if( (VAR_26[VAR_36] & (0x1 << VAR_37) ) != (0x1 << VAR_37) ){
        break;
      }
    }
    for(VAR_48=0;VAR_48<VAR_12*VAR_27->pwd_len;VAR_48++){
      VAR_36 = (VAR_48) / 8;
      VAR_37 = (VAR_48) % 8;
      if( (VAR_25[VAR_36] & (0x1 << VAR_37) ) != (0x1 << VAR_37) ){
        break;
      }
    }
    if(VAR_27->ssid_len > 0 && VAR_27->pwd_len > 0 && VAR_47==VAR_12*VAR_27->ssid_len && VAR_48==VAR_12*VAR_27->pwd_len){
      if( FUNC_6(VAR_30, VAR_12*VAR_27->ssid_len, VAR_31->ssid, VAR_26) && FUNC_6(VAR_28, VAR_12*VAR_27->pwd_len, VAR_31->password, VAR_25) ){


        VAR_23 = 1;
        FUNC_2(VAR_31->ssid);
        FUNC_2(" %d\n", VAR_27->ssid_len);
        FUNC_2(VAR_31->password);
        FUNC_2(" %d\n", VAR_27->pwd_len);
        FUNC_7();





        return;
      }
    }
  }

end:
  return;
}
