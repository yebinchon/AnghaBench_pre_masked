
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_w32_state {int input_ctx; } ;
typedef int UINT ;
typedef int BYTE ;


 int FUNC_0 (int*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct vo_w32_state*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct vo_w32_state *VAR_6, UINT VAR_7, UINT VAR_8)
{
    BYTE VAR_9[256];
    FUNC_0(VAR_9);




    if ((VAR_9[VAR_5] & 0x80) && (VAR_9[VAR_1] & 0x80) &&
        !FUNC_2(VAR_6->input_ctx))
    {
        VAR_9[VAR_5] = VAR_9[VAR_1] = 0;
        VAR_9[VAR_3] = VAR_9[VAR_2];
        VAR_9[VAR_0] = VAR_9[VAR_4];
    }

    int VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_9);




    if (VAR_10 < 0x20 && (VAR_9[VAR_3] & 0x80)) {
        VAR_9[VAR_2] = VAR_9[VAR_5] = VAR_9[VAR_3] = 0;
        VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_9);
    }
    if (VAR_10 < 0x20 && (VAR_9[VAR_0] & 0x80)) {
        VAR_9[VAR_1] = VAR_9[VAR_4] = VAR_9[VAR_0] = 0;
        VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_9);
    }
    if (VAR_10 < 0x20)
        return 0;


    if (VAR_10 < 0x10000)
        return FUNC_1(VAR_6, VAR_10);
    return VAR_10;
}
