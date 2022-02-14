
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCGUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 char const* FUNC_1 (int ) ;

__attribute__((used)) static const char * FUNC_2(LPCGUID VAR_4)
{
    if (FUNC_0(&VAR_1, VAR_4))
        return "DSDEVID_DefaultPlayback";
    else if (FUNC_0(&VAR_3, VAR_4))
        return "DSDEVID_DefaultVoicePlayback";
    else if (FUNC_0(&VAR_0, VAR_4))
        return "DSDEVID_DefaultCapture";
    else if (FUNC_0(&VAR_2, VAR_4))
        return "DSDEVID_DefaultVoiceCapture";
    return FUNC_1(VAR_4);
}
