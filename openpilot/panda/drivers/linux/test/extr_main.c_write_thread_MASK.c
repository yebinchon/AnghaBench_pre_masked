
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct can_frame {int can_id; int can_dlc; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct can_frame*,int) ;

void *FUNC_4( void *VAR_4 ){
  int VAR_5;
  struct can_frame VAR_6;
  int VAR_7 = *((int*) VAR_4);

  while(1){
    for(int VAR_8 = 0; VAR_8 < 1; VAR_8 ++){
    if(VAR_2 % 2){
      VAR_6.can_id = 0x8AA | VAR_0;
    }else{
      VAR_6.can_id = 0xAA;
    }

    VAR_6.can_dlc = VAR_2;
    FUNC_0(VAR_6.data, VAR_3, VAR_6.can_dlc);

    VAR_5 = FUNC_3(VAR_7, &VAR_6, sizeof(struct can_frame));

    FUNC_1("Wrote %d bytes; addr: %lx; datlen: %d\n", VAR_5, VAR_6.can_id, VAR_6.can_dlc);

    if(VAR_1){
      VAR_2++;
      if(VAR_2 >= 8)
 VAR_1 = 0;
    }else{
      VAR_2--;
      if(VAR_2 <= 0)
 VAR_1 = 1;
    }
    }
    FUNC_2(2);
  }
}
