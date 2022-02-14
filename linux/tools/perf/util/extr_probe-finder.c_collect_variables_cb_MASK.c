
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct variable_list {int vars; } ;
struct strbuf {int buf; } ;
struct TYPE_3__ {int addr; int sp_die; int machine; int fb_ops; } ;
struct available_var_finder {int nvls; TYPE_1__ pf; scalar_t__ child; struct variable_list* vls; } ;
struct TYPE_4__ {scalar_t__ show_location_range; } ;
typedef int Dwarf_Die ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct strbuf VAR_6 ;
 int FUNC_0 (int *,int ,int ,int *,int ,int *) ;
 int FUNC_1 (int *,int *,struct strbuf*) ;
 int FUNC_2 (int *,struct strbuf*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 TYPE_2__ VAR_7 ;
 int FUNC_6 (struct strbuf*,char*,int) ;
 scalar_t__ FUNC_7 (struct strbuf*,char) ;
 int FUNC_8 (struct strbuf*,int *) ;
 scalar_t__ FUNC_9 (struct strbuf*,int) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(Dwarf_Die *VAR_8, void *VAR_9)
{
 struct available_var_finder *VAR_10 = VAR_9;
 struct variable_list *VAR_11;
 struct strbuf VAR_12 = VAR_6;
 int VAR_13, VAR_14;

 VAR_11 = &VAR_10->vls[VAR_10->nvls - 1];

 VAR_13 = FUNC_4(VAR_8);
 if (VAR_13 == VAR_3 ||
     VAR_13 == VAR_4) {
  VAR_14 = FUNC_0(VAR_8, VAR_10->pf.addr,
      VAR_10->pf.fb_ops, &VAR_10->pf.sp_die,
      VAR_10->pf.machine, ((void*)0));
  if (VAR_14 == 0 || VAR_14 == -VAR_5) {
   int VAR_15;
   bool VAR_16 = !VAR_10->child;

   if (FUNC_9(&VAR_12, 64) < 0)
    goto error;

   if (VAR_7.show_location_range) {
    if (!VAR_16)
     VAR_15 = FUNC_6(&VAR_12,
      VAR_14 ? "[INV]\t" : "[VAL]\t", 6);
    else
     VAR_15 = FUNC_6(&VAR_12, "[EXT]\t", 6);
    if (VAR_15)
     goto error;
   }

   VAR_15 = FUNC_2(VAR_8, &VAR_12);

   if (!VAR_15 && VAR_7.show_location_range &&
    !VAR_16) {
    if (FUNC_7(&VAR_12, '\t') < 0)
     goto error;
    VAR_15 = FUNC_1(&VAR_10->pf.sp_die,
       VAR_8, &VAR_12);
   }

   FUNC_5("Add new var: %s\n", VAR_12.buf);
   if (VAR_15 == 0) {
    FUNC_11(VAR_11->vars,
     FUNC_8(&VAR_12, ((void*)0)));
   }
   FUNC_10(&VAR_12);
  }
 }

 if (VAR_10->child && FUNC_3(VAR_8, VAR_10->pf.addr))
  return VAR_0;
 else
  return VAR_2;
error:
 FUNC_10(&VAR_12);
 FUNC_5("Error in strbuf\n");
 return VAR_1;
}
