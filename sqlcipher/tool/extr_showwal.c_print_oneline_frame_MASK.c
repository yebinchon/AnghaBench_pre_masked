
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int s0; unsigned int s1; } ;
typedef TYPE_1__ Cksum ;


 int FUNC_0 (TYPE_1__*,unsigned char*,int,int ) ;
 int FUNC_1 (int ,char*,int,int,int,int,int,unsigned int,unsigned int,char*) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int,int) ;
 int FUNC_4 (unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(int VAR_2, Cksum *VAR_3){
  int VAR_4;
  unsigned char *VAR_5;
  unsigned int VAR_6, VAR_7;
  VAR_4 = 32 + (VAR_2-1)*(VAR_0+24);
  VAR_5 = FUNC_3(VAR_4, 24);
  FUNC_0(VAR_3, VAR_5, 8, 0);
  FUNC_0(VAR_3, FUNC_3(VAR_4+24, VAR_0), VAR_0, 0);
  VAR_6 = FUNC_4(VAR_5+16);
  VAR_7 = FUNC_4(VAR_5+20);
  FUNC_1(VAR_1, "Frame %4d: %6d %6d 0x%08x,%08x 0x%08x,%08x %s\n",
          VAR_2,
          FUNC_4(VAR_5),
          FUNC_4(VAR_5+4),
          FUNC_4(VAR_5+8),
          FUNC_4(VAR_5+12),
          VAR_6,
          VAR_7,
          (VAR_6==VAR_3->s0 && VAR_7==VAR_3->s1) ? "" : "cksum-fail"
  );



  VAR_3->s0 = VAR_6;
  VAR_3->s1 = VAR_7;
  FUNC_2(VAR_5);
}
