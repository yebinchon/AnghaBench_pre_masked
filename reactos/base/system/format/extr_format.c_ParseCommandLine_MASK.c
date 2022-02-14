
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_2__ {int* SizeString; int ClusterSize; } ;
typedef void* BOOLEAN ;


 int VAR_0 ;
 void* VAR_1 ;
 int* VAR_2 ;
 void* VAR_3 ;
 int* VAR_4 ;
 void* VAR_5 ;
 int* VAR_6 ;
 TYPE_1__* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_0 (int*,char*,int) ;
 int FUNC_1 (int*,...) ;

__attribute__((used)) static int FUNC_2(int VAR_10, WCHAR *VAR_11[])
{
    int VAR_12, VAR_13;
    BOOLEAN VAR_14 = VAR_3;
    BOOLEAN VAR_15 = VAR_3;
    BOOLEAN VAR_16 = VAR_3;
    BOOLEAN VAR_17 = VAR_3;
    BOOLEAN VAR_18 = VAR_3;

    for (VAR_12 = 1; VAR_12 < VAR_10; VAR_12++)
    {
        switch (VAR_11[VAR_12][0])
        {
            case L'-': case L'/':

                if (!FUNC_0(&VAR_11[VAR_12][1], L"FS:", 3))
                {
                    if (VAR_14) return -1;
                    VAR_4 = &VAR_11[VAR_12][4];
                    VAR_14 = VAR_9;
                }
                else if (!FUNC_0(&VAR_11[VAR_12][1], L"A:", 2))
                {
                    if (VAR_16) return -1;
                    VAR_13 = 0;
                    while (VAR_7[VAR_13].ClusterSize &&
                           FUNC_1(VAR_7[VAR_13].SizeString, &VAR_11[VAR_12][3]))
                    {
                        VAR_13++;
                    }

                    if (!VAR_7[VAR_13].ClusterSize) return VAR_12;
                    VAR_0 = VAR_7[VAR_13].ClusterSize;
                    VAR_16 = VAR_9;
                }
                else if (!FUNC_0(&VAR_11[VAR_12][1], L"V:", 2))
                {
                    if (VAR_17) return -1;
                    VAR_6 = &VAR_11[VAR_12][3];
                    VAR_17 = VAR_9;
                    VAR_5 = VAR_9;
                }
                else if (!FUNC_1(&VAR_11[VAR_12][1], L"Q"))
                {
                    if (VAR_15) return -1;
                    VAR_8 = VAR_9;
                    VAR_15 = VAR_9;
                }
                else if (!FUNC_1(&VAR_11[VAR_12][1], L"C"))
                {
                    if (VAR_18) return -1;
                    VAR_1 = VAR_9;
                    VAR_18 = VAR_9;
                }
                else
                {
                    return VAR_12;
                }
                break;

            default:
            {
                if (VAR_2) return VAR_12;
                if (VAR_11[VAR_12][1] != L':') return VAR_12;

                VAR_2 = VAR_11[VAR_12];
                break;
            }
        }
    }
    return 0;
}
