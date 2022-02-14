
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_6 ;

int FUNC_3(long VAR_7)
{
 VAR_3 = VAR_7;

 VAR_2 = -1;

 if (!FUNC_1(&VAR_4, VAR_1)) {
  FUNC_0("Failed to alloc mask");
  return -VAR_0;
 }


 return FUNC_2(VAR_6, ((void*)0), VAR_5);
}
