
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int block_dev_desc_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int * FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 () ;

block_dev_desc_t * FUNC_4(void)
{
 block_dev_desc_t * VAR_2;

 FUNC_3();

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_2) {
  FUNC_2("blk device %s%d not exists\n",
   VAR_1,
   VAR_0);
  FUNC_1();
 }

 return VAR_2;
}
