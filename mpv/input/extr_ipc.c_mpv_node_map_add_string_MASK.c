
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* string; } ;
struct TYPE_7__ {TYPE_1__ u; int format; } ;
typedef TYPE_2__ mpv_node ;


 int VAR_0 ;
 int FUNC_0 (void*,TYPE_2__*,char const*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, mpv_node *VAR_2, const char *VAR_3, const char *VAR_4)
{
    mpv_node VAR_5 = {.format = VAR_0, .u.string = (char*)VAR_4};
    FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_5);
}
