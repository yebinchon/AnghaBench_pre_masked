
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tmpldbacreate; int tmpltrusted; } ;
struct TYPE_4__ {void* tmpllibrary; void* tmplhandler; void* tmplvalidator; void* tmplinline; int tmpldbacreate; int tmpltrusted; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef int Relation ;
typedef TYPE_1__ PLTemplate ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_pltemplate ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int,int *,int,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static PLTemplate *
FUNC_13(const char *VAR_10)
{
 PLTemplate *VAR_11;
 Relation VAR_12;
 SysScanDesc VAR_13;
 ScanKeyData VAR_14;
 HeapTuple VAR_15;

 VAR_12 = FUNC_12(VAR_9, VAR_0);

 FUNC_4(&VAR_14,
    VAR_4,
    VAR_6, VAR_7,
    FUNC_0(VAR_10));
 VAR_13 = FUNC_8(VAR_12, VAR_8, 1,
         ((void*)0), 1, &VAR_14);

 VAR_15 = FUNC_10(VAR_13);
 if (FUNC_2(VAR_15))
 {
  Form_pg_pltemplate VAR_16 = (Form_pg_pltemplate) FUNC_1(VAR_15);
  Datum VAR_17;
  bool VAR_18;

  VAR_11 = (PLTemplate *) FUNC_7(sizeof(PLTemplate));
  VAR_11->tmpltrusted = VAR_16->tmpltrusted;
  VAR_11->tmpldbacreate = VAR_16->tmpldbacreate;


  VAR_17 = FUNC_6(VAR_15, VAR_1,
        FUNC_3(VAR_12), &VAR_18);
  if (!VAR_18)
   VAR_11->tmplhandler = FUNC_5(VAR_17);

  VAR_17 = FUNC_6(VAR_15, VAR_2,
        FUNC_3(VAR_12), &VAR_18);
  if (!VAR_18)
   VAR_11->tmplinline = FUNC_5(VAR_17);

  VAR_17 = FUNC_6(VAR_15, VAR_5,
        FUNC_3(VAR_12), &VAR_18);
  if (!VAR_18)
   VAR_11->tmplvalidator = FUNC_5(VAR_17);

  VAR_17 = FUNC_6(VAR_15, VAR_3,
        FUNC_3(VAR_12), &VAR_18);
  if (!VAR_18)
   VAR_11->tmpllibrary = FUNC_5(VAR_17);


  if (!VAR_11->tmplhandler || !VAR_11->tmpllibrary)
   VAR_11 = ((void*)0);
 }
 else
  VAR_11 = ((void*)0);

 FUNC_9(VAR_13);

 FUNC_11(VAR_12, VAR_0);

 return VAR_11;
}
