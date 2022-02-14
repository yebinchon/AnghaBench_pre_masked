
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmUnitInfo {scalar_t__ length; scalar_t__ space; scalar_t__ start; } ;
struct chmFile {scalar_t__ data_offset; int compression_enabled; } ;
typedef scalar_t__ LONGUINT64 ;
typedef scalar_t__ LONGINT64 ;
typedef scalar_t__ Int64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct chmFile*,unsigned char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct chmFile*,unsigned char*,scalar_t__,scalar_t__) ;

LONGINT64 FUNC_2(struct chmFile *VAR_1,
                               struct chmUnitInfo *VAR_2,
                               unsigned char *VAR_3,
                               LONGUINT64 VAR_4,
                               LONGINT64 VAR_5)
{

    if (VAR_1 == ((void*)0))
        return 0;


    if (VAR_4 >= VAR_2->length)
        return 0;


    if (VAR_4 + VAR_5 > VAR_2->length)
        VAR_5 = VAR_2->length - VAR_4;


    if (VAR_2->space == VAR_0)
    {

        return FUNC_1(VAR_1,
                                VAR_3,
                                VAR_1->data_offset + VAR_2->start + VAR_4,
                                VAR_5);
    }


    else
    {
        Int64 VAR_6=0, VAR_7=0;


        if (! VAR_1->compression_enabled)
            return VAR_7;

        do {


            VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_2->start + VAR_4, VAR_5);


            if (VAR_6 == 0)
                return VAR_7;


            VAR_7 += VAR_6;
            VAR_5 -= VAR_6;
            VAR_4 += VAR_6;
            VAR_3 += VAR_6;

        } while (VAR_5 != 0);

        return VAR_7;
    }
}
