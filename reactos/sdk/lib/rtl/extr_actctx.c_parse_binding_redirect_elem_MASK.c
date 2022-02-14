
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlstr_t ;
typedef int xmlbuf_t ;
typedef int UNICODE_STRING ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int *,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int *,int *,scalar_t__*,scalar_t__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static BOOL FUNC_5(xmlbuf_t* VAR_5)
{
    xmlstr_t VAR_6, VAR_7;
    UNICODE_STRING VAR_8, VAR_9;
    BOOL VAR_10 = VAR_0, VAR_11;

    while (FUNC_1(VAR_5, &VAR_6, &VAR_7, &VAR_11, &VAR_10))
    {
        VAR_9 = FUNC_3(&VAR_6);
        VAR_8 = FUNC_3(&VAR_7);

        if (FUNC_4(&VAR_6, VAR_4))
        {
            FUNC_0("Not stored yet oldVersion=%wZ\n", &VAR_8);
        }
        else if (FUNC_4(&VAR_6, VAR_3))
        {
            FUNC_0("Not stored yet newVersion=%wZ\n", &VAR_8);
        }
        else
        {
            FUNC_0("unknown attr %wZ=%wZ\n", &VAR_9, &VAR_8);
        }
    }

    if (VAR_11 || VAR_10) return VAR_10;
    return FUNC_2(VAR_5, VAR_2, VAR_1);
}
