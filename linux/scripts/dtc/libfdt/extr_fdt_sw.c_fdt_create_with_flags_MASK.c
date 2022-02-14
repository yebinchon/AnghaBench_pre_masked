
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fdt_reserve_entry {int dummy; } ;
struct fdt_header {int dummy; } ;


 size_t FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (void*,size_t const) ;
 int FUNC_7 (void*,int) ;
 int FUNC_8 (void*,int ) ;
 int FUNC_9 (void*,int ,int) ;

int FUNC_10(void *VAR_5, int VAR_6, uint32_t VAR_7)
{
 const size_t VAR_8 = FUNC_0(sizeof(struct fdt_header),
      sizeof(struct fdt_reserve_entry));
 void *VAR_9 = VAR_5;

 if (VAR_6 < VAR_8)
  return -VAR_2;

 if (VAR_7 & ~VAR_0)
  return -VAR_1;

 FUNC_9(VAR_5, 0, VAR_6);
 FUNC_3(VAR_9, VAR_4);
 FUNC_8(VAR_9, VAR_3);
 FUNC_2(VAR_9, VAR_7);

 FUNC_7(VAR_9, VAR_6);

 FUNC_6(VAR_9, VAR_8);
 FUNC_5(VAR_9, FUNC_1(VAR_9));
 FUNC_4(VAR_9, 0);

 return 0;
}
