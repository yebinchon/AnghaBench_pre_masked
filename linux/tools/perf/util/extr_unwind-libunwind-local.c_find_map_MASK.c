
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_word_t ;
struct unwind_info {int thread; } ;
struct map {int dummy; } ;
struct addr_location {int dummy; } ;


 int VAR_0 ;
 struct map* FUNC_0 (int ,int ,int ,struct addr_location*) ;

__attribute__((used)) static struct map *FUNC_1(unw_word_t VAR_1, struct unwind_info *VAR_2)
{
 struct addr_location VAR_3;
 return FUNC_0(VAR_2->thread, VAR_0, VAR_1, &VAR_3);
}
