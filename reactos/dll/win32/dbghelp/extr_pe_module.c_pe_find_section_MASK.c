
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct image_section_map {unsigned int sidx; struct image_file_map* fmap; } ;
struct TYPE_7__ {unsigned int NumberOfSections; } ;
struct TYPE_8__ {TYPE_1__ FileHeader; } ;
struct TYPE_11__ {char* strtable; TYPE_4__* sect; TYPE_2__ ntheader; } ;
struct TYPE_12__ {TYPE_5__ pe; } ;
struct image_file_map {TYPE_6__ u; } ;
struct TYPE_9__ {scalar_t__ Name; } ;
struct TYPE_10__ {TYPE_3__ shdr; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*,char const*) ;

BOOL FUNC_3(struct image_file_map* VAR_3, const char* VAR_4,
                     struct image_section_map* VAR_5)
{
    const char* VAR_6;
    unsigned VAR_7;
    char VAR_8[VAR_1 + 1];

    for (VAR_7 = 0; VAR_7 < VAR_3->u.pe.ntheader.FileHeader.NumberOfSections; VAR_7++)
    {
        VAR_6 = (const char*)VAR_3->u.pe.sect[VAR_7].shdr.Name;

        if (VAR_6[0] == '/' && VAR_3->u.pe.strtable)
            VAR_6 = VAR_3->u.pe.strtable + FUNC_0(VAR_6 + 1);
        else
        {

            VAR_6 = FUNC_1(VAR_8, VAR_6, VAR_1);
            VAR_8[VAR_1] = '\0';
        }
        if (!FUNC_2(VAR_6, VAR_4))
        {
            VAR_5->fmap = VAR_3;
            VAR_5->sidx = VAR_7;
            return VAR_2;
        }
    }
    VAR_5->fmap = ((void*)0);
    VAR_5->sidx = -1;

    return VAR_0;
}
