
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_transport {int id; } ;


 struct nn_transport** VAR_0 ;

const struct nn_transport *FUNC_0 (int VAR_1)
{
    const struct nn_transport *VAR_2;
    int VAR_3;

    for (VAR_3 = 0; (VAR_2 = VAR_0[VAR_3]) != ((void*)0); VAR_3++) {
        if (VAR_2->id == VAR_1)
            return VAR_2;
    }
    return ((void*)0);
}
