
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tabname; } ;
typedef TYPE_1__ HTAB ;


 int VAR_0 ;
 int FUNC_0 () ;
 size_t VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 size_t VAR_2 ;
 int * VAR_3 ;
 TYPE_1__** VAR_4 ;

__attribute__((used)) static void
FUNC_2(HTAB *VAR_5)
{
 if (VAR_2 >= VAR_1)
  FUNC_1(VAR_0, "too many active hash_seq_search scans, cannot start one on \"%s\"",
    VAR_5->tabname);
 VAR_4[VAR_2] = VAR_5;
 VAR_3[VAR_2] = FUNC_0();
 VAR_2++;
}
