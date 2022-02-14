
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {int attstattarget; int attcacheoff; int attnum; int attndims; int attnotnull; int atthasdef; int atthasmissing; char attidentity; char attgenerated; int attisdropped; int attislocal; int atttypid; int attlen; int attbyval; char attalign; char attstorage; void* attcollation; scalar_t__ attinhcount; int atttypmod; int attname; scalar_t__ attrelid; } ;
struct TYPE_7__ {int natts; } ;
typedef int Oid ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int AttrNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 void* VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;


 TYPE_2__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *,char const*) ;

void
FUNC_6(TupleDesc VAR_4,
        AttrNumber VAR_5,
        const char *VAR_6,
        Oid VAR_7,
        int32 VAR_8,
        int VAR_9)
{
 Form_pg_attribute VAR_10;


 FUNC_1(FUNC_2(VAR_4));
 FUNC_1(VAR_5 >= 1);
 FUNC_1(VAR_5 <= VAR_4->natts);


 VAR_10 = FUNC_3(VAR_4, VAR_5 - 1);
 VAR_10->attrelid = 0;


 FUNC_0(VAR_6 != ((void*)0));
 FUNC_5(&(VAR_10->attname), VAR_6);

 VAR_10->attstattarget = -1;
 VAR_10->attcacheoff = -1;
 VAR_10->atttypmod = VAR_8;

 VAR_10->attnum = VAR_5;
 VAR_10->attndims = VAR_9;

 VAR_10->attnotnull = 0;
 VAR_10->atthasdef = 0;
 VAR_10->atthasmissing = 0;
 VAR_10->attidentity = '\0';
 VAR_10->attgenerated = '\0';
 VAR_10->attisdropped = 0;
 VAR_10->attislocal = 1;
 VAR_10->attinhcount = 0;


 VAR_10->atttypid = VAR_7;






 switch (VAR_7)
 {
  case 128:
  case 129:
   VAR_10->attlen = -1;
   VAR_10->attbyval = 0;
   VAR_10->attalign = 'i';
   VAR_10->attstorage = 'x';
   VAR_10->attcollation = VAR_0;
   break;

  case 132:
   VAR_10->attlen = 1;
   VAR_10->attbyval = 1;
   VAR_10->attalign = 'c';
   VAR_10->attstorage = 'p';
   VAR_10->attcollation = VAR_3;
   break;

  case 131:
   VAR_10->attlen = 4;
   VAR_10->attbyval = 1;
   VAR_10->attalign = 'i';
   VAR_10->attstorage = 'p';
   VAR_10->attcollation = VAR_3;
   break;

  case 130:
   VAR_10->attlen = 8;
   VAR_10->attbyval = VAR_2;
   VAR_10->attalign = 'd';
   VAR_10->attstorage = 'p';
   VAR_10->attcollation = VAR_3;
   break;

  default:
   FUNC_4(VAR_1, "unsupported type %u", VAR_7);
 }
}
