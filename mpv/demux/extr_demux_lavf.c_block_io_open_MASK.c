
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demuxer {int dummy; } ;
struct AVFormatContext {struct demuxer* opaque; } ;
typedef int AVIOContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct demuxer*,char*,char const*) ;

__attribute__((used)) static int FUNC_2(struct AVFormatContext *VAR_1, AVIOContext **VAR_2,
                         const char *VAR_3, int VAR_4, AVDictionary **VAR_5)
{
    struct demuxer *VAR_6 = VAR_1->opaque;
    FUNC_1(VAR_6, "Not opening '%s' due to --access-references=no.\n", VAR_3);
    return FUNC_0(VAR_0);
}
