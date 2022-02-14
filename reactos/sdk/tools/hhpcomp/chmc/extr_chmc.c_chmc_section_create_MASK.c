
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct chmcSection {char* name; char* filename; scalar_t__ fd; scalar_t__ mark_count; int mark_list; int control_data; int reset_table_header; int len; scalar_t__ offset; } ;
struct chmcFile {TYPE_1__* config; } ;
struct TYPE_2__ {char* tmpdir; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 struct chmcSection* FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_1 ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (struct chmcSection*) ;
 int FUNC_9 (char*,char const*,int) ;
 scalar_t__ FUNC_10 (char*,int ) ;
 int VAR_2 ;
 int FUNC_11 (char*,char const*) ;
 scalar_t__ FUNC_12 (char*,char const*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char const*) ;

struct chmcSection *FUNC_15(struct chmcFile *VAR_3,
                                        const char *VAR_4)
{
 struct chmcSection *VAR_5;

 FUNC_1(VAR_4);

 VAR_5 = FUNC_2(1, sizeof(struct chmcSection));
 if (VAR_5) {
  const char *VAR_6;
  int VAR_7;

  VAR_7 = FUNC_14(VAR_4);
  FUNC_9(VAR_5->name, VAR_4, VAR_7 + 1);
  VAR_5->offset = 0;
  VAR_5->len = 0;

  VAR_6 = ((void*)0);
  if (VAR_3->config != ((void*)0))
   VAR_6 = VAR_3->config->tmpdir;
  if (VAR_6 == ((void*)0))
   VAR_6 = "/tmp/";

  VAR_7 = FUNC_14(VAR_6);
  if (VAR_7 >= VAR_0 - 12) {
   FUNC_6(VAR_1, FUNC_13(VAR_1));
   FUNC_5("tmpdir too long: '%s'", VAR_6);
   goto fail;
  }

  FUNC_11(VAR_5->filename, VAR_6);
  if (VAR_5->filename[VAR_7 - 1] != '/')
   FUNC_11(VAR_5->filename, "/");

  if (FUNC_12("MSCompressed", VAR_4) == 0)
   FUNC_11(VAR_5->filename, "chmcCXXXXXX");
  else
   FUNC_11(VAR_5->filename, "chmcUXXXXXX");

  VAR_5->fd = FUNC_10(VAR_5->filename, 0);
  FUNC_7(VAR_2, "temp file: %s\n", VAR_5->filename);
  if (VAR_5->fd < 0) {
   FUNC_6(VAR_1, FUNC_13(VAR_1));
   FUNC_5("creat() file '%s'", VAR_5->filename);
   goto fail;
  }
  else if (FUNC_12(VAR_5->name, "MSCompressed") == 0) {
   FUNC_4(&VAR_5->reset_table_header);
   FUNC_3(&VAR_5->control_data);
   FUNC_0(&VAR_5->mark_list);
   VAR_5->mark_count = 0;
  }
 } else {
  FUNC_6(VAR_1, FUNC_13(VAR_1));
  FUNC_5("section '%s' allocation failed", VAR_4);
 }

 return VAR_5;

 fail:
 FUNC_8(VAR_5);
 return ((void*)0);
}
