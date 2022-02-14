
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_2__ {char* inputfile; scalar_t__ lineno; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(const char **VAR_1, uint64 *VAR_2)
{
 if (VAR_0.inputfile)
 {
  *VAR_1 = VAR_0.inputfile;
  *VAR_2 = VAR_0.lineno;
 }
 else
 {
  *VAR_1 = ((void*)0);
  *VAR_2 = 0;
 }
}
