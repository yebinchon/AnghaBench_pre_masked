
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int audio_unit; } ;
struct ao {struct priv* priv; } ;
typedef int OSStatus ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct ao *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    OSStatus VAR_2 = FUNC_0(VAR_1->audio_unit);
    FUNC_1("can't stop audio unit");
}
