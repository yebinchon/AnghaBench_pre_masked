
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ccid_operations {scalar_t__ const ccid_id; } ;


 int FUNC_0 (struct ccid_operations**) ;
 struct ccid_operations** VAR_0 ;

__attribute__((used)) static struct ccid_operations *FUNC_1(const u8 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2]->ccid_id == VAR_1)
   return VAR_0[VAR_2];
 return ((void*)0);
}
