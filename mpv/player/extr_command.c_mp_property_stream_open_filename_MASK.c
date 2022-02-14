
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct TYPE_2__ {int stream_open_filename; int demuxer; int playing; } ;
typedef TYPE_1__ MPContext ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int,void*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(void *VAR_4, struct m_property *VAR_5,
                                            int VAR_6, void *VAR_7)
{
    MPContext *VAR_8 = VAR_4;
    if (!VAR_8->stream_open_filename || !VAR_8->playing)
        return VAR_3;
    switch (VAR_6) {
    case 128: {
        if (VAR_8->demuxer)
            return VAR_0;
        VAR_8->stream_open_filename =
            FUNC_1(VAR_8->stream_open_filename, *(char **)VAR_7);
        return VAR_2;
    }
    case 129:
    case 130:
        return FUNC_0(VAR_6, VAR_7, VAR_8->stream_open_filename);
    }
    return VAR_1;
}
