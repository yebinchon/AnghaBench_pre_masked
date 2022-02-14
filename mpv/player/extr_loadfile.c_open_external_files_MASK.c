
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int playback_abort; } ;
typedef enum stream_type { ____Placeholder_stream_type } stream_type ;


 int FUNC_0 (struct MPContext*,char*,int,int ) ;
 char** FUNC_1 (void*,char**) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct MPContext *VAR_0, char **VAR_1,
                                enum stream_type VAR_2)
{

    void *VAR_3 = FUNC_3(((void*)0));
    VAR_1 = FUNC_1(VAR_3, VAR_1);

    for (int VAR_4 = 0; VAR_1 && VAR_1[VAR_4]; VAR_4++)
        FUNC_0(VAR_0, VAR_1[VAR_4], VAR_2, VAR_0->playback_abort);

    FUNC_2(VAR_3);
}
