
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sltg_hrefmap {int href_count; int* href; } ;


 int FUNC_0 (char*,int,int) ;
 int* FUNC_1 (int) ;
 int* FUNC_2 (int*,int) ;

__attribute__((used)) static int FUNC_3(struct sltg_hrefmap *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3 = -1;

    for (VAR_2 = 0; VAR_2 < VAR_0->href_count; VAR_2++)
    {
        if (VAR_0->href[VAR_2] == VAR_1)
        {
            VAR_3 = VAR_2;
            break;
        }
    }

    if (VAR_3 == -1)
    {
        VAR_3 = VAR_0->href_count;

        if (VAR_0->href)
            VAR_0->href = FUNC_2(VAR_0->href, sizeof(*VAR_0->href) * (VAR_0->href_count + 1));
        else
            VAR_0->href = FUNC_1(sizeof(*VAR_0->href));

        VAR_0->href[VAR_0->href_count] = VAR_1;
        VAR_0->href_count++;
    }

    FUNC_0("typelib href %d mapped to local href %d\n", VAR_1, VAR_3);

    return VAR_3 << 2;
}
