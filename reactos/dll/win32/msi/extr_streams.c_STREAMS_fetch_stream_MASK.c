
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tagMSIVIEW {int dummy; } ;
typedef size_t UINT ;
struct TYPE_9__ {scalar_t__ QuadPart; } ;
struct TYPE_8__ {TYPE_2__* db; } ;
struct TYPE_7__ {size_t num_streams; TYPE_1__* streams; } ;
struct TYPE_6__ {int * stream; } ;
typedef TYPE_3__ MSISTREAMSVIEW ;
typedef TYPE_4__ LARGE_INTEGER ;
typedef int IStream ;
typedef int HRESULT ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_4__,int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (char*,struct tagMSIVIEW*,size_t,size_t,int **) ;

__attribute__((used)) static UINT FUNC_4(struct tagMSIVIEW *VAR_3, UINT VAR_4, UINT VAR_5, IStream **VAR_6)
{
    MSISTREAMSVIEW *VAR_7 = (MSISTREAMSVIEW *)VAR_3;
    LARGE_INTEGER VAR_8;
    HRESULT VAR_9;

    FUNC_3("(%p, %d, %d, %p)\n", VAR_3, VAR_4, VAR_5, VAR_6);

    if (VAR_4 >= VAR_7->db->num_streams)
        return VAR_0;

    VAR_8.QuadPart = 0;
    VAR_9 = FUNC_2( VAR_7->db->streams[VAR_4].stream, VAR_8, VAR_2, ((void*)0) );
    if (FUNC_0( VAR_9 ))
        return VAR_0;

    *VAR_6 = VAR_7->db->streams[VAR_4].stream;
    FUNC_1( *VAR_6 );

    return VAR_1;
}
