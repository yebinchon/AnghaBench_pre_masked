
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao_convert_fmt {int channels; int src_fmt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,void*,int) ;
 int FUNC_2 (struct ao_convert_fmt*) ;

void FUNC_3(struct ao_convert_fmt *VAR_0, void **VAR_1, int VAR_2)
{
    int VAR_3 = FUNC_2(VAR_0);
    bool VAR_4 = FUNC_0(VAR_0->src_fmt);
    int VAR_5 = VAR_4 ? VAR_0->channels : 1;
    int VAR_6 = VAR_2 * (VAR_4 ? 1: VAR_0->channels);
    for (int VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
        FUNC_1(VAR_3, VAR_1[VAR_7], VAR_6);
}
