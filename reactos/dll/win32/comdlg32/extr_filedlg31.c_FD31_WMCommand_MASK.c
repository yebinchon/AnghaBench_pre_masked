
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef int FD31_DATA ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int const*,int *,int,int ,int ) ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,int ,int,int ) ;
 int FUNC_8 (char*) ;
 int VAR_4 ;
 int VAR_5 ;







__attribute__((used)) static LRESULT FUNC_9( HWND VAR_6, LPARAM VAR_7, UINT VAR_8,
          UINT VAR_9, const FD31_DATA *VAR_10 )
{
    switch (VAR_9)
    {
        case 130:
        FUNC_5(VAR_6);
        if (VAR_8 == VAR_2)
        {
            return FUNC_7(VAR_6, VAR_5, 134, 0);
        }
        else if (VAR_8 == VAR_3)
            return FUNC_3( VAR_10 );
        break;

        case 129:
        FUNC_5(VAR_6);
        if (VAR_8 == VAR_2)
            return FUNC_1( VAR_10 );
        break;

        case 132:
        if (VAR_8 == VAR_0)
            return FUNC_4( VAR_10 );
        break;

        case 133:
        break;

        case 128:
        break;

        case 131:
        if (VAR_8 == VAR_0)
            return FUNC_2( VAR_10 );
        break;

        case 134:
        FUNC_8("OK pressed\n");
        if (FUNC_6( VAR_10, ((void*)0), VAR_9, 0, VAR_1 ))
            FUNC_0(VAR_6, VAR_4);
        return VAR_4;

        case 135:
        FUNC_0(VAR_6, VAR_1);
        return VAR_4;

        case 136:
        FUNC_0(VAR_6, VAR_4);
        return VAR_4;
    }
    return VAR_1;
}
