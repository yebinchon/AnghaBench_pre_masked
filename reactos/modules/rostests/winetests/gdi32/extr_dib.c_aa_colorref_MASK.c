
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int COLORREF ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static inline COLORREF FUNC_5( COLORREF VAR_0, COLORREF VAR_1, BYTE VAR_2 )
{
    COLORREF VAR_3;

    VAR_3 = FUNC_3( FUNC_4( FUNC_2(VAR_0), FUNC_2(VAR_1), VAR_2 ),
               FUNC_4( FUNC_1(VAR_0), FUNC_1(VAR_1), VAR_2 ),
               FUNC_4( FUNC_0(VAR_0), FUNC_0(VAR_1), VAR_2 ) );
    return VAR_3;
}
