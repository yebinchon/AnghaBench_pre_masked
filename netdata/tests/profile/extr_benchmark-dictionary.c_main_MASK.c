
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned long long tv_sec; unsigned long long tv_usec; } ;
struct rusage {TYPE_1__ ru_utime; } ;
struct myvalue {int i; } ;
struct TYPE_11__ {TYPE_2__* stats; } ;
struct TYPE_10__ {unsigned long long inserts; unsigned long long deletes; unsigned long long searches; } ;
typedef TYPE_3__ DICTIONARY ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 struct myvalue* FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_3__*,char*,struct myvalue*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,struct rusage*) ;
 int FUNC_8 (char*,int,char*,int) ;
 int VAR_2 ;

int FUNC_9(int VAR_3, char **VAR_4) {
 if(VAR_3 || VAR_4) {;}


 DICTIONARY *VAR_5 = FUNC_0(VAR_0);
 if(!VAR_5) FUNC_5("Cannot create dictionary.");

 struct rusage VAR_6, VAR_7;
 unsigned long long VAR_8;
 char VAR_9[100 + 1];
 struct myvalue VAR_10, *VAR_11;
 int VAR_12, VAR_13 = 30000000, VAR_14;



 FUNC_7(VAR_1, &VAR_6);
 VAR_5->stats->inserts = VAR_5->stats->deletes = VAR_5->stats->searches = 0ULL;
 FUNC_6(VAR_2, "Inserting %d entries in the dictionary\n", VAR_13);
 for(VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  VAR_10.i = VAR_12;
  FUNC_8(VAR_9, 100, "%d", VAR_12);

  FUNC_4(VAR_5, VAR_9, &VAR_10, sizeof(struct myvalue));
 }
 FUNC_7(VAR_1, &VAR_7);
 VAR_8 = (VAR_7.ru_utime.tv_sec * 1000000ULL + VAR_7.ru_utime.tv_usec) - (VAR_6.ru_utime.tv_sec * 1000000ULL + VAR_6.ru_utime.tv_usec);
 FUNC_6(VAR_2, "Added %d entries in %llu nanoseconds: %llu inserts per second\n", VAR_13, VAR_8, VAR_13 * 1000000ULL / VAR_8);
 FUNC_6(VAR_2, " > Dictionary: %llu inserts, %llu deletes, %llu searches\n\n", VAR_5->stats->inserts, VAR_5->stats->deletes, VAR_5->stats->searches);



 FUNC_7(VAR_1, &VAR_6);
 VAR_5->stats->inserts = VAR_5->stats->deletes = VAR_5->stats->searches = 0ULL;
 FUNC_6(VAR_2, "Retrieving %d entries from the dictionary\n", VAR_13);
 for(VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  VAR_10.i = VAR_12;
  FUNC_8(VAR_9, 100, "%d", VAR_12);

  VAR_11 = FUNC_3(VAR_5, VAR_9);
  if(!VAR_11)
   FUNC_6(VAR_2, "ERROR: cannot get value %d from the dictionary\n", VAR_12);
  else if(VAR_11->i != VAR_12)
   FUNC_6(VAR_2, "ERROR: expected %d but got %d\n", VAR_12, VAR_11->i);
 }
 FUNC_7(VAR_1, &VAR_7);
 VAR_8 = (VAR_7.ru_utime.tv_sec * 1000000ULL + VAR_7.ru_utime.tv_usec) - (VAR_6.ru_utime.tv_sec * 1000000ULL + VAR_6.ru_utime.tv_usec);
 FUNC_6(VAR_2, "Read %d entries in %llu nanoseconds: %llu searches per second\n", VAR_13, VAR_8, VAR_13 * 1000000ULL / VAR_8);
 FUNC_6(VAR_2, " > Dictionary: %llu inserts, %llu deletes, %llu searches\n\n", VAR_5->stats->inserts, VAR_5->stats->deletes, VAR_5->stats->searches);



 FUNC_7(VAR_1, &VAR_6);
 VAR_5->stats->inserts = VAR_5->stats->deletes = VAR_5->stats->searches = 0ULL;
 FUNC_6(VAR_2, "Resetting %d entries in the dictionary\n", VAR_13);
 for(VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  VAR_10.i = VAR_12;
  FUNC_8(VAR_9, 100, "%d", VAR_12);

  FUNC_4(VAR_5, VAR_9, &VAR_10, sizeof(struct myvalue));
 }
 FUNC_7(VAR_1, &VAR_7);
 VAR_8 = (VAR_7.ru_utime.tv_sec * 1000000ULL + VAR_7.ru_utime.tv_usec) - (VAR_6.ru_utime.tv_sec * 1000000ULL + VAR_6.ru_utime.tv_usec);
 FUNC_6(VAR_2, "Reset %d entries in %llu nanoseconds: %llu resets per second\n", VAR_13, VAR_8, VAR_13 * 1000000ULL / VAR_8);
 FUNC_6(VAR_2, " > Dictionary: %llu inserts, %llu deletes, %llu searches\n\n", VAR_5->stats->inserts, VAR_5->stats->deletes, VAR_5->stats->searches);



 FUNC_7(VAR_1, &VAR_6);
 VAR_5->stats->inserts = VAR_5->stats->deletes = VAR_5->stats->searches = 0ULL;
 FUNC_6(VAR_2, "Searching  %d non-existing entries in the dictionary\n", VAR_13);
 VAR_14 = VAR_13 * 2;
 for(VAR_12 = VAR_13; VAR_12 < VAR_14; VAR_12++) {
  VAR_10.i = VAR_12;
  FUNC_8(VAR_9, 100, "%d", VAR_12);

  VAR_11 = FUNC_3(VAR_5, VAR_9);
  if(VAR_11)
   FUNC_6(VAR_2, "ERROR: cannot got non-existing value %d from the dictionary\n", VAR_12);
 }
 FUNC_7(VAR_1, &VAR_7);
 VAR_8 = (VAR_7.ru_utime.tv_sec * 1000000ULL + VAR_7.ru_utime.tv_usec) - (VAR_6.ru_utime.tv_sec * 1000000ULL + VAR_6.ru_utime.tv_usec);
 FUNC_6(VAR_2, "Searched %d non-existing entries in %llu nanoseconds: %llu not found searches per second\n", VAR_13, VAR_8, VAR_13 * 1000000ULL / VAR_8);
 FUNC_6(VAR_2, " > Dictionary: %llu inserts, %llu deletes, %llu searches\n\n", VAR_5->stats->inserts, VAR_5->stats->deletes, VAR_5->stats->searches);



 FUNC_7(VAR_1, &VAR_6);
 VAR_5->stats->inserts = VAR_5->stats->deletes = VAR_5->stats->searches = 0ULL;
 FUNC_6(VAR_2, "Deleting %d entries from the dictionary\n", VAR_13);
 for(VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  VAR_10.i = VAR_12;
  FUNC_8(VAR_9, 100, "%d", VAR_12);

  FUNC_1(VAR_5, VAR_9);
 }
 FUNC_7(VAR_1, &VAR_7);
 VAR_8 = (VAR_7.ru_utime.tv_sec * 1000000ULL + VAR_7.ru_utime.tv_usec) - (VAR_6.ru_utime.tv_sec * 1000000ULL + VAR_6.ru_utime.tv_usec);
 FUNC_6(VAR_2, "Deleted %d entries in %llu nanoseconds: %llu deletes per second\n", VAR_13, VAR_8, VAR_13 * 1000000ULL / VAR_8);
 FUNC_6(VAR_2, " > Dictionary: %llu inserts, %llu deletes, %llu searches\n\n", VAR_5->stats->inserts, VAR_5->stats->deletes, VAR_5->stats->searches);



 FUNC_7(VAR_1, &VAR_6);
 VAR_5->stats->inserts = VAR_5->stats->deletes = VAR_5->stats->searches = 0ULL;
 FUNC_6(VAR_2, "Destroying dictionary\n");
 FUNC_2(VAR_5);
 FUNC_7(VAR_1, &VAR_7);
 VAR_8 = (VAR_7.ru_utime.tv_sec * 1000000ULL + VAR_7.ru_utime.tv_usec) - (VAR_6.ru_utime.tv_sec * 1000000ULL + VAR_6.ru_utime.tv_usec);
 FUNC_6(VAR_2, "Destroyed in %llu nanoseconds\n", VAR_8);

 return 0;
}
