
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct tipc_media {scalar_t__ type_id; } ;


 struct tipc_media** VAR_0 ;

__attribute__((used)) static struct tipc_media *FUNC_0(u8 VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2] != ((void*)0); VAR_2++) {
  if (VAR_0[VAR_2]->type_id == VAR_1)
   break;
 }
 return VAR_0[VAR_2];
}
