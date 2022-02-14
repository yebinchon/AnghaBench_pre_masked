
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int Flags; int Type; } ;
struct TYPE_9__ {int EmfPlusFlags; scalar_t__ LogicalDpiY; scalar_t__ LogicalDpiX; int Version; TYPE_1__ Header; } ;
struct TYPE_8__ {scalar_t__ metafile_type; } ;
typedef int HDC ;
typedef int GpStatus ;
typedef TYPE_2__ GpMetafile ;
typedef TYPE_3__ EmfPlusHeader ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int,void**) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static GpStatus FUNC_3(GpMetafile *VAR_9, HDC VAR_10)
{
    GpStatus VAR_11;

    if (VAR_9->metafile_type == VAR_5 || VAR_9->metafile_type == VAR_4)
    {
        EmfPlusHeader *VAR_12;

        VAR_11 = FUNC_1(VAR_9, sizeof(EmfPlusHeader), (void**)&VAR_12);
        if (VAR_11 != VAR_6)
            return VAR_11;

        VAR_12->Header.Type = VAR_1;

        if (VAR_9->metafile_type == VAR_4)
            VAR_12->Header.Flags = 1;
        else
            VAR_12->Header.Flags = 0;

        VAR_12->Version = VAR_8;

        if (FUNC_0(VAR_10, VAR_7) == VAR_0)
            VAR_12->EmfPlusFlags = 1;
        else
            VAR_12->EmfPlusFlags = 0;

        VAR_12->LogicalDpiX = FUNC_0(VAR_10, VAR_2);
        VAR_12->LogicalDpiY = FUNC_0(VAR_10, VAR_3);

        FUNC_2(VAR_9);
    }

    return VAR_6;
}
