
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum af_format { ____Placeholder_af_format } af_format ;
typedef int ALchar ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;

__attribute__((used)) static enum af_format FUNC_4(int VAR_3)
{
    switch (VAR_3) {
    case 128:
        if (FUNC_0((ALchar*)"AL_FORMAT_MONO8"))
            return 128;
        break;

    case 130:
        if (FUNC_0((ALchar*)"AL_FORMAT_MONO16"))
            return 130;
        break;

    case 129:
        if (FUNC_3(FUNC_1(VAR_1), "X-Fi") != ((void*)0))
            return 129;
        break;

    case 131:
        if (FUNC_2((ALchar*)"AL_EXT_float32") == VAR_2)
            return 131;
        break;
    }
    return VAR_0;
}
