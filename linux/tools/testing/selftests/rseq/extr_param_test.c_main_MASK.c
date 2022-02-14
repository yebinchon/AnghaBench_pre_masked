
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 void** VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_17 ;

int FUNC_13(int VAR_18, char **VAR_19)
{
 int VAR_20;

 for (VAR_20 = 1; VAR_20 < VAR_18; VAR_20++) {
  if (VAR_19[VAR_20][0] != '-')
   continue;
  switch (VAR_19[VAR_20][1]) {
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
   if (VAR_18 < VAR_20 + 2) {
    FUNC_7(VAR_18, VAR_19);
    goto error;
   }
   VAR_0[VAR_19[VAR_20][1] - '0'] = FUNC_1(VAR_19[VAR_20 + 1]);
   VAR_20++;
   break;
  case 'm':
   if (VAR_18 < VAR_20 + 2) {
    FUNC_7(VAR_18, VAR_19);
    goto error;
   }
   VAR_10 = FUNC_1(VAR_19[VAR_20 + 1]);
   if (VAR_10 < 0) {
    FUNC_7(VAR_18, VAR_19);
    goto error;
   }
   VAR_20++;
   break;
  case 's':
   if (VAR_18 < VAR_20 + 2) {
    FUNC_7(VAR_18, VAR_19);
    goto error;
   }
   VAR_13 = FUNC_1(VAR_19[VAR_20 + 1]);
   if (VAR_13 < 0) {
    FUNC_7(VAR_18, VAR_19);
    goto error;
   }
   VAR_20++;
   break;
  case 'y':
   VAR_16 = 1;
   break;
  case 'k':
   VAR_12 = 1;
   break;
  case 'd':
   VAR_8 = 1;
   break;
  case 'D':
   if (VAR_18 < VAR_20 + 2) {
    FUNC_7(VAR_18, VAR_19);
    goto error;
   }
   VAR_7 = FUNC_1(VAR_19[VAR_20 + 1]);
   if (VAR_7 < 0) {
    FUNC_7(VAR_18, VAR_19);
    goto error;
   }
   VAR_20++;
   break;
  case 't':
   if (VAR_18 < VAR_20 + 2) {
    FUNC_7(VAR_18, VAR_19);
    goto error;
   }
   VAR_15 = FUNC_1(VAR_19[VAR_20 + 1]);
   if (VAR_15 < 0) {
    FUNC_7(VAR_18, VAR_19);
    goto error;
   }
   VAR_20++;
   break;
  case 'r':
   if (VAR_18 < VAR_20 + 2) {
    FUNC_7(VAR_18, VAR_19);
    goto error;
   }
   VAR_11 = FUNC_2(VAR_19[VAR_20 + 1]);
   if (VAR_11 < 0) {
    FUNC_7(VAR_18, VAR_19);
    goto error;
   }
   VAR_20++;
   break;
  case 'h':
   FUNC_7(VAR_18, VAR_19);
   goto end;
  case 'T':
   if (VAR_18 < VAR_20 + 2) {
    FUNC_7(VAR_18, VAR_19);
    goto error;
   }
   VAR_14 = *VAR_19[VAR_20 + 1];
   switch (VAR_14) {
   case 's':
   case 'l':
   case 'i':
   case 'b':
   case 'm':
    break;
   default:
    FUNC_7(VAR_18, VAR_19);
    goto error;
   }
   VAR_20++;
   break;
  case 'v':
   VAR_17 = 1;
   break;
  case 'M':
   VAR_9 = 1;
   break;
  default:
   FUNC_7(VAR_18, VAR_19);
   goto error;
  }
 }

 VAR_1 = VAR_0[1];
 VAR_2 = VAR_0[2];
 VAR_3 = VAR_0[3];
 VAR_4 = VAR_0[4];
 VAR_5 = VAR_0[5];
 VAR_6 = VAR_0[6];

 if (FUNC_6())
  goto error;

 if (!VAR_8 && FUNC_4())
  goto error;
 switch (VAR_14) {
 case 's':
  FUNC_3("spinlock\n");
  FUNC_12();
  break;
 case 'l':
  FUNC_3("linked list\n");
  FUNC_10();
  break;
 case 'b':
  FUNC_3("buffer\n");
  FUNC_8();
  break;
 case 'm':
  FUNC_3("memcpy buffer\n");
  FUNC_11();
  break;
 case 'i':
  FUNC_3("counter increment\n");
  FUNC_9();
  break;
 }
 if (!VAR_8 && FUNC_5())
  FUNC_0();
end:
 return 0;

error:
 return -1;
}
