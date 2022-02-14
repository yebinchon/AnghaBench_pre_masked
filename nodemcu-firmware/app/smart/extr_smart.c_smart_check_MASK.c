
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int*,int ,int) ;

int FUNC_2(uint8_t *VAR_1, uint16_t VAR_2, uint8_t *VAR_3, uint8_t *VAR_4){
  if(VAR_2 == 0)
    return 0;
  uint16_t VAR_5 = VAR_2/VAR_0;
  uint16_t VAR_6 = 0, VAR_7 = 0;
  int VAR_8 = 0, VAR_9 = 1;
  FUNC_1(VAR_3,0,VAR_5);

  if(VAR_0==1){
    for(VAR_8=0;VAR_8<VAR_2;VAR_8++){
      VAR_6 = (VAR_8) / 8;
      VAR_7 = (VAR_8) % 8;
      if(0x20>VAR_1[VAR_8] || VAR_1[VAR_8]>=0x7F){
        FUNC_0("Smart: got np byte %d:%02x\n", VAR_8, VAR_1[VAR_8]);
        VAR_1[VAR_8] = 0;
        VAR_4[VAR_6] &= ~(0x1 << VAR_7);
        VAR_9 = 0;
      } else {
        VAR_3[VAR_8] = VAR_1[VAR_8];
      }
    }
    return VAR_9;
  }


  if((VAR_2%VAR_0) != 0){

    FUNC_0("Smart: smart_check got odd len\n");
    return 0;
  }

  if(VAR_2 == 2){

    if(VAR_1[0]<=0xF && ((VAR_1[0]^0x1)&(0xF == (VAR_1[1]>>4))) ){
      VAR_3[0] = ((VAR_1[0]&0xF)<<4) + (VAR_1[1]&0xF);
      VAR_9 = 1;
    }else{
      VAR_1[0] = 0;
      VAR_1[1] = 0;
      VAR_4[0] &= ~(0x3 << 0);
      VAR_9 = 0;
    }
    return VAR_9;
  }

  VAR_9 = 1;
  for(VAR_8=VAR_2-2;VAR_8>0;VAR_8--){
    bool VAR_10 = ( ((VAR_1[VAR_8]&0xF)^((VAR_8+1)&0xF)) == (VAR_1[VAR_8+1]>>4) );
    bool VAR_11 = ( ((VAR_1[VAR_8-1]&0xF)^(VAR_8&0xF)) == (VAR_1[VAR_8]>>4) );
    if(!VAR_10 || !VAR_11){

      FUNC_0("check: wf %d:%02x %02x %02x\n",VAR_8,VAR_1[VAR_8-1],VAR_1[VAR_8], VAR_1[VAR_8+1]);
      VAR_6 = (VAR_8-1) / 8;
      VAR_7 = (VAR_8-1) % 8;
      VAR_1[VAR_8-1] = 0;
      VAR_4[VAR_6] &= ~(0x1 << VAR_7);

      VAR_6 = (VAR_8) / 8;
      VAR_7 = (VAR_8) % 8;
      VAR_1[VAR_8] = 0;
      VAR_4[VAR_6] &= ~(0x1 << VAR_7);

      VAR_6 = (VAR_8+1) / 8;
      VAR_7 = (VAR_8+1) % 8;
      VAR_1[VAR_8+1] = 0;
      VAR_4[VAR_6] &= ~(0x1 << VAR_7);
      VAR_9 = 0;
      return VAR_9;
    }

    if((VAR_8%VAR_0) == 0) {
      VAR_3[VAR_8/VAR_0] = ((VAR_1[VAR_8]&0xF)<<4) + (VAR_1[VAR_8+1]&0xF);
    }
  }

  if(VAR_8==0){
    VAR_3[0] = ((VAR_1[0]&0xF)<<4) + (VAR_1[1]&0xF);
  }

  for(VAR_8=0;VAR_8<VAR_5;VAR_8++){

    VAR_6 = (VAR_8*VAR_0) / 8;
    VAR_7 = (VAR_8*VAR_0) % 8;
    if(0x20>VAR_3[VAR_8] || VAR_3[VAR_8]>=0x7F){
      FUNC_0("Smart: got np byte %d:%02x\n", VAR_8, VAR_3[VAR_8]);
      VAR_3[VAR_8] = 0;
      VAR_1[VAR_8*VAR_0] = 0;
      VAR_1[VAR_8*VAR_0+1] = 0;
      VAR_4[VAR_6] &= ~(0x3 << VAR_7);
      VAR_9 = 0;
    }
  }
  return VAR_9;
}
