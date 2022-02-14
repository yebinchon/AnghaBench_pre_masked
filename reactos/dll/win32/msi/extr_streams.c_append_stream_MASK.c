
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_6__ {size_t num_streams; TYPE_1__* streams; int strings; } ;
struct TYPE_5__ {int * stream; int str_index; } ;
typedef TYPE_2__ MSIDATABASE ;
typedef int IStream ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ,int const*,int,int ) ;
 int FUNC_3 (TYPE_2__*,size_t) ;

__attribute__((used)) static UINT FUNC_4( MSIDATABASE *VAR_3, const WCHAR *VAR_4, IStream *VAR_5 )
{
    UINT VAR_6 = VAR_3->num_streams;

    if (!FUNC_3( VAR_3, VAR_3->num_streams + 1 ))
        return VAR_0;

    VAR_3->streams[VAR_6].str_index = FUNC_2( VAR_3->strings, VAR_4, -1, VAR_2 );
    VAR_3->streams[VAR_6].stream = VAR_5;
    VAR_3->num_streams++;

    FUNC_0("added %s\n", FUNC_1( VAR_4 ));
    return VAR_1;
}
