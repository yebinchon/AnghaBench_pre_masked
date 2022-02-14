
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_sub_property {char* member_0; int unavailable; int member_1; } ;
struct demuxer {struct demux_edition* editions; } ;
struct demux_edition {int default_edition; int metadata; } ;
struct MPContext {struct demuxer* demuxer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct m_sub_property*,int,void*) ;
 char* FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(int VAR_0, int VAR_1, void *VAR_2, void *VAR_3)
{
    struct MPContext *VAR_4 = VAR_3;

    struct demuxer *VAR_5 = VAR_4->demuxer;
    struct demux_edition *VAR_6 = &VAR_5->editions[VAR_0];

    char *VAR_7 = FUNC_4(VAR_6->metadata, "title");

    struct m_sub_property VAR_8[] = {
        {"id", FUNC_1(VAR_0)},
        {"title", FUNC_2(VAR_7),
                        .unavailable = !VAR_7},
        {"default", FUNC_0(VAR_6->default_edition)},
        {0}
    };

    return FUNC_3(VAR_8, VAR_1, VAR_2);
}
