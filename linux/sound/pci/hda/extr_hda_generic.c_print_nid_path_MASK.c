
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int depth; int * path; } ;
struct hda_codec {int dummy; } ;
typedef int buf ;


 int FUNC_0 (struct hda_codec*,char*,char const*,int,char*) ;
 int FUNC_1 (char*,int,char*,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0,
      const char *VAR_1, struct nid_path *VAR_2)
{
 char VAR_3[40];
 char *VAR_4 = VAR_3;
 int VAR_5;

 *VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2->depth; VAR_5++)
  VAR_4 += FUNC_1(VAR_4, sizeof(VAR_3) - (VAR_4 - VAR_3), "%s%02x",
     VAR_4 != VAR_3 ? ":" : "",
     VAR_2->path[VAR_5]);

 FUNC_0(VAR_0, "%s path: depth=%d '%s'\n", VAR_1, VAR_2->depth, VAR_3);
}
