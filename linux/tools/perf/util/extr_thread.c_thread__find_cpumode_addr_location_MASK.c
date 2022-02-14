
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct thread {int dummy; } ;
struct addr_location {scalar_t__ map; } ;


 size_t FUNC_0 (int const*) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int FUNC_1 (struct thread*,int const,int ,struct addr_location*) ;

void FUNC_2(struct thread *VAR_4, u64 VAR_5,
     struct addr_location *VAR_6)
{
 size_t VAR_7;
 const u8 VAR_8[] = {
  VAR_3,
  VAR_2,
  VAR_1,
  VAR_0
 };

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_8); VAR_7++) {
  FUNC_1(VAR_4, VAR_8[VAR_7], VAR_5, VAR_6);
  if (VAR_6->map)
   break;
 }
}
