
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pagesize; } ;


 int FUNC_0 (int ,char*,int,int,int) ;
 TYPE_1__ VAR_0 ;
 unsigned char* FUNC_1 (int,int,int ) ;
 int FUNC_2 (unsigned char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(int VAR_2){
  int VAR_3;
  unsigned char *VAR_4;
  VAR_3 = (VAR_2-1)*VAR_0.pagesize;
  FUNC_0(VAR_1, "Page %d:   (offsets 0x%x..0x%x)\n",
          VAR_2, VAR_3, VAR_3+VAR_0.pagesize-1);
  VAR_4 = FUNC_1(VAR_3, VAR_0.pagesize, 0);
  FUNC_2(VAR_4);
}
