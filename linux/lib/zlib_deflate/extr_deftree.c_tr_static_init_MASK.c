
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ush ;
typedef void* uch ;
typedef int u32 ;
typedef int ct_data ;
struct TYPE_4__ {int Len; int Code; } ;
struct TYPE_3__ {int Len; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (int ) ;
 void** VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int FUNC_2 (int *,scalar_t__,scalar_t__*) ;
 void** VAR_9 ;
 TYPE_2__* VAR_10 ;
 TYPE_1__* VAR_11 ;

__attribute__((used)) static void FUNC_3(void)
{
    static int VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15;
    int VAR_16;
    int VAR_17;
    ush VAR_18[VAR_3+1];


    if (VAR_12) return;


    VAR_15 = 0;
    for (VAR_16 = 0; VAR_16 < VAR_1-1; VAR_16++) {
        VAR_5[VAR_16] = VAR_15;
        for (VAR_13 = 0; VAR_13 < (1<<VAR_8[VAR_16]); VAR_13++) {
            VAR_9[VAR_15++] = (uch)VAR_16;
        }
    }
    FUNC_0 (VAR_15 == 256, "tr_static_init: length != 256");




    VAR_9[VAR_15-1] = (uch)VAR_16;


    VAR_17 = 0;
    for (VAR_16 = 0 ; VAR_16 < 16; VAR_16++) {
        VAR_4[VAR_16] = VAR_17;
        for (VAR_13 = 0; VAR_13 < (1<<VAR_7[VAR_16]); VAR_13++) {
            VAR_6[VAR_17++] = (uch)VAR_16;
        }
    }
    FUNC_0 (VAR_17 == 256, "tr_static_init: dist != 256");
    VAR_17 >>= 7;
    for ( ; VAR_16 < VAR_0; VAR_16++) {
        VAR_4[VAR_16] = VAR_17 << 7;
        for (VAR_13 = 0; VAR_13 < (1<<(VAR_7[VAR_16]-7)); VAR_13++) {
            VAR_6[256 + VAR_17++] = (uch)VAR_16;
        }
    }
    FUNC_0 (VAR_17 == 256, "tr_static_init: 256+dist != 512");


    for (VAR_14 = 0; VAR_14 <= VAR_3; VAR_14++) VAR_18[VAR_14] = 0;
    VAR_13 = 0;
    while (VAR_13 <= 143) VAR_11[VAR_13++].Len = 8, VAR_18[8]++;
    while (VAR_13 <= 255) VAR_11[VAR_13++].Len = 9, VAR_18[9]++;
    while (VAR_13 <= 279) VAR_11[VAR_13++].Len = 7, VAR_18[7]++;
    while (VAR_13 <= 287) VAR_11[VAR_13++].Len = 8, VAR_18[8]++;




    FUNC_2((ct_data *)VAR_11, VAR_2+1, VAR_18);


    for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
        VAR_10[VAR_13].Len = 5;
        VAR_10[VAR_13].Code = FUNC_1((u32)VAR_13) >> (32 - 5);
    }
    VAR_12 = 1;
}
