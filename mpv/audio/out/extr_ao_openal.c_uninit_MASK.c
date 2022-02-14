
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int num_buffers; } ;
struct ao {struct priv* priv; } ;
typedef int ALCdevice ;
typedef int ALCcontext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_9(struct ao *VAR_4)
{
    struct priv *VAR_5 = VAR_4->priv;
    FUNC_2(VAR_3);
    FUNC_3(VAR_3, VAR_0, 0);

    FUNC_0(VAR_5->num_buffers, VAR_2);
    FUNC_1(1, &VAR_3);

    ALCcontext *VAR_6 = FUNC_7();
    ALCdevice *VAR_7 = FUNC_6(VAR_6);
    FUNC_8(((void*)0));
    FUNC_5(VAR_6);
    FUNC_4(VAR_7);
    VAR_1 = ((void*)0);
}
