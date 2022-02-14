
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ typnamespace; scalar_t__ typinput; scalar_t__ typoutput; scalar_t__ typreceive; scalar_t__ typsend; scalar_t__ typmodin; scalar_t__ typmodout; scalar_t__ typanalyze; scalar_t__ typrelid; scalar_t__ typelem; scalar_t__ typbasetype; scalar_t__ typcollation; int typowner; } ;
struct TYPE_8__ {scalar_t__ objectId; scalar_t__ objectSubId; void* classId; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int Node ;
typedef TYPE_2__* Form_pg_type ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 void* VAR_6 ;
 char VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_1 (void*,scalar_t__,int) ;
 int FUNC_2 (void*,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_6 (void*,scalar_t__,int ,int ,void*) ;
 int FUNC_7 (void*,scalar_t__,int ) ;

void
FUNC_8(Oid VAR_10,
       Form_pg_type VAR_11,
       Node *VAR_12,
       void *VAR_13,
       char VAR_14,
       bool VAR_15,
       bool VAR_16,
       bool VAR_17)
{
 ObjectAddress VAR_18,
    VAR_19;


 if (VAR_17)
 {
  FUNC_1(VAR_9, VAR_10, 1);
  FUNC_2(VAR_9, VAR_10, 0);
 }

 VAR_18.classId = VAR_9;
 VAR_18.objectId = VAR_10;
 VAR_18.objectSubId = 0;







 if (!VAR_16)
 {
  VAR_19.classId = VAR_5;
  VAR_19.objectId = VAR_11->typnamespace;
  VAR_19.objectSubId = 0;
  FUNC_3(&VAR_18, &VAR_19, VAR_3);

  FUNC_7(VAR_9, VAR_10,
        VAR_11->typowner);

  FUNC_6(VAR_9, VAR_10, 0,
         VAR_11->typowner, VAR_13);

  FUNC_4(&VAR_18, VAR_17);
 }


 if (FUNC_0(VAR_11->typinput))
 {
  VAR_19.classId = VAR_6;
  VAR_19.objectId = VAR_11->typinput;
  VAR_19.objectSubId = 0;
  FUNC_3(&VAR_18, &VAR_19, VAR_3);
 }

 if (FUNC_0(VAR_11->typoutput))
 {
  VAR_19.classId = VAR_6;
  VAR_19.objectId = VAR_11->typoutput;
  VAR_19.objectSubId = 0;
  FUNC_3(&VAR_18, &VAR_19, VAR_3);
 }

 if (FUNC_0(VAR_11->typreceive))
 {
  VAR_19.classId = VAR_6;
  VAR_19.objectId = VAR_11->typreceive;
  VAR_19.objectSubId = 0;
  FUNC_3(&VAR_18, &VAR_19, VAR_3);
 }

 if (FUNC_0(VAR_11->typsend))
 {
  VAR_19.classId = VAR_6;
  VAR_19.objectId = VAR_11->typsend;
  VAR_19.objectSubId = 0;
  FUNC_3(&VAR_18, &VAR_19, VAR_3);
 }

 if (FUNC_0(VAR_11->typmodin))
 {
  VAR_19.classId = VAR_6;
  VAR_19.objectId = VAR_11->typmodin;
  VAR_19.objectSubId = 0;
  FUNC_3(&VAR_18, &VAR_19, VAR_3);
 }

 if (FUNC_0(VAR_11->typmodout))
 {
  VAR_19.classId = VAR_6;
  VAR_19.objectId = VAR_11->typmodout;
  VAR_19.objectSubId = 0;
  FUNC_3(&VAR_18, &VAR_19, VAR_3);
 }

 if (FUNC_0(VAR_11->typanalyze))
 {
  VAR_19.classId = VAR_6;
  VAR_19.objectId = VAR_11->typanalyze;
  VAR_19.objectSubId = 0;
  FUNC_3(&VAR_18, &VAR_19, VAR_3);
 }
 if (FUNC_0(VAR_11->typrelid))
 {
  VAR_19.classId = VAR_8;
  VAR_19.objectId = VAR_11->typrelid;
  VAR_19.objectSubId = 0;

  if (VAR_14 != VAR_7)
   FUNC_3(&VAR_18, &VAR_19, VAR_2);
  else
   FUNC_3(&VAR_19, &VAR_18, VAR_2);
 }






 if (FUNC_0(VAR_11->typelem))
 {
  VAR_19.classId = VAR_9;
  VAR_19.objectId = VAR_11->typelem;
  VAR_19.objectSubId = 0;
  FUNC_3(&VAR_18, &VAR_19,
         VAR_15 ? VAR_2 : VAR_3);
 }


 if (FUNC_0(VAR_11->typbasetype))
 {
  VAR_19.classId = VAR_9;
  VAR_19.objectId = VAR_11->typbasetype;
  VAR_19.objectSubId = 0;
  FUNC_3(&VAR_18, &VAR_19, VAR_3);
 }



 if (FUNC_0(VAR_11->typcollation) &&
  VAR_11->typcollation != VAR_1)
 {
  VAR_19.classId = VAR_0;
  VAR_19.objectId = VAR_11->typcollation;
  VAR_19.objectSubId = 0;
  FUNC_3(&VAR_18, &VAR_19, VAR_3);
 }


 if (VAR_12)
  FUNC_5(&VAR_18, VAR_12, VAR_4, VAR_3);
}
