
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ languages_initialized; int ** table; } ;
typedef int OT_Script ;
typedef TYPE_1__ LoadedScript ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int const*) ;

__attribute__((used)) static void FUNC_1(LoadedScript *VAR_5)
{
    const OT_Script *VAR_6;

    if (VAR_5->languages_initialized)
        return;

    if ((VAR_6 = VAR_5->table[VAR_4]))
        FUNC_0(VAR_5, VAR_2, VAR_6);
    if ((VAR_6 = VAR_5->table[VAR_3]))
        FUNC_0(VAR_5, VAR_1, VAR_6);

    VAR_5->languages_initialized = VAR_0;
}
