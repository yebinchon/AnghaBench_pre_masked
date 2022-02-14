
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct file {int size; int attribs; int time; int date; } ;
struct TYPE_7__ {int (* read ) (int,scalar_t__,scalar_t__,int*,int ) ;scalar_t__ data_in; scalar_t__ cdata_in; int pv; int (* close ) (int,int*,int ) ;} ;
typedef int PFNFCISTATUS ;
typedef int (* PFNFCIGETOPENINFO ) (char*,int *,int *,int *,int*,int ) ;
typedef int INT_PTR ;
typedef TYPE_1__ FCI_Int ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 struct file* FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,struct file*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int,scalar_t__,scalar_t__,int*,int ) ;
 int FUNC_5 (int,int*,int ) ;

__attribute__((used)) static BOOL FUNC_6( FCI_Int *VAR_6, char *VAR_7, char *VAR_8, BOOL VAR_9,
                           PFNFCIGETOPENINFO VAR_10, PFNFCISTATUS VAR_11 )
{
    int VAR_12, VAR_13;
    INT_PTR VAR_14;
    struct file *VAR_15;

    if (!(VAR_15 = FUNC_1( VAR_6, VAR_8 ))) return VAR_1;

    VAR_14 = VAR_10( VAR_7, &VAR_15->date, &VAR_15->time, &VAR_15->attribs, &VAR_12, VAR_6->pv );
    if (VAR_14 == -1)
    {
        FUNC_2( VAR_6, VAR_15 );
        FUNC_3( VAR_6, VAR_2, VAR_12 );
        return VAR_1;
    }
    if (VAR_9) VAR_15->attribs |= VAR_5;

    for (;;)
    {
        VAR_13 = VAR_6->read( VAR_14, VAR_6->data_in + VAR_6->cdata_in,
                         VAR_0 - VAR_6->cdata_in, &VAR_12, VAR_6->pv );
        if (!VAR_13) break;

        if (VAR_13 == -1)
        {
            FUNC_3( VAR_6, VAR_3, VAR_12 );
            return VAR_1;
        }
        VAR_15->size += VAR_13;
        VAR_6->cdata_in += VAR_13;
        if (VAR_6->cdata_in == VAR_0 && !FUNC_0( VAR_6, VAR_11 )) return VAR_1;
    }
    VAR_6->close( VAR_14, &VAR_12, VAR_6->pv );
    return VAR_4;
}
