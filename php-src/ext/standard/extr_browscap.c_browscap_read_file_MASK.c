
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zend_ini_parser_cb_t ;
struct TYPE_9__ {int fp; } ;
struct TYPE_10__ {TYPE_1__ handle; } ;
typedef TYPE_2__ zend_file_handle ;
struct TYPE_11__ {int kv_size; void* kv; scalar_t__ kv_used; void* htab; } ;
typedef TYPE_3__ browser_data ;
struct TYPE_12__ {int str_interned; int * current_section_name; int * current_entry; TYPE_3__* bdata; int member_0; } ;
typedef TYPE_4__ browscap_parser_ctx ;
typedef int browscap_kv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int *,int ,int) ;
 int FUNC_5 (void*,int ,int *,int ,int,int ) ;
 int FUNC_6 (TYPE_2__*,int,int ,int ,TYPE_4__*) ;
 int FUNC_7 (TYPE_2__*,int ,char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(char *VAR_8, browser_data *VAR_9, int VAR_10)
{
 zend_file_handle VAR_11;
 browscap_parser_ctx VAR_12 = {0};

 if (VAR_8 == ((void*)0) || VAR_8[0] == '\0') {
  return VAR_1;
 }

 FUNC_7(&VAR_11, FUNC_0(VAR_8, "r"), VAR_8);
 if (!VAR_11.handle.fp) {
  FUNC_2(VAR_0, "Cannot open '%s' for reading", VAR_8);
  return VAR_1;
 }

 VAR_9->htab = FUNC_1(sizeof *VAR_9->htab, VAR_10);
 FUNC_5(VAR_9->htab, 0, ((void*)0),
  VAR_10 ? VAR_5 : VAR_4, VAR_10, 0);

 VAR_9->kv_size = 16 * 1024;
 VAR_9->kv_used = 0;
 VAR_9->kv = FUNC_1(sizeof(browscap_kv) * VAR_9->kv_size, VAR_10);


 VAR_12.bdata = VAR_9;
 VAR_12.current_entry = ((void*)0);
 VAR_12.current_section_name = ((void*)0);
 FUNC_4(&VAR_12.str_interned, 8, ((void*)0), VAR_7, VAR_10);

 FUNC_6(&VAR_11, 1, VAR_3,
   (zend_ini_parser_cb_t) VAR_6, &VAR_12);


 if (VAR_12.current_section_name) {
  FUNC_8(VAR_12.current_section_name);
 }
 FUNC_3(&VAR_12.str_interned);

 return VAR_2;
}
