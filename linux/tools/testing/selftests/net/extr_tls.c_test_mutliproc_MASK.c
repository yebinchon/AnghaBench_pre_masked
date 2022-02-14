
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _test_data_tls {int fd; int cfd; } ;
struct __test_metadata {int dummy; } ;
typedef int rb ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (int,size_t const) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (char*,int,size_t const) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (int ,char*,int,int ) ;
 int FUNC_10 (int ,char*,size_t const,int ) ;
 int FUNC_11 (int ,int,int *,size_t const) ;
 int FUNC_12 (int*) ;
 int FUNC_13 (int,char*,size_t const) ;

__attribute__((used)) static void
FUNC_14(struct __test_metadata *VAR_3, struct _test_data_tls *VAR_4,
        bool VAR_5, unsigned int VAR_6, unsigned int VAR_7)
{
 const unsigned int VAR_8 = VAR_6 + VAR_7;
 const size_t VAR_9 = 6 * 1000 * 1000;
 const size_t VAR_10 = VAR_9 / 100;
 size_t VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15;
 char VAR_16[VAR_10];
 pid_t VAR_17;


 FUNC_0(!(VAR_6 % VAR_7) || !(VAR_7 % VAR_6), 1);
 VAR_11 = VAR_7 / VAR_6 ?: 1;
 VAR_12 = VAR_6 / VAR_7 ?: 1;


 VAR_14 = FUNC_8("/tmp/", VAR_1 | VAR_0, 0600);
 FUNC_1(VAR_14, 0);

 FUNC_7(VAR_16, 0xac, VAR_10);
 FUNC_0(FUNC_13(VAR_14, VAR_16, VAR_10), VAR_10);


 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
  VAR_17 = FUNC_5();
  FUNC_2(VAR_17, -1);
  if (!VAR_17)
   break;
 }


 if (VAR_17) {
  for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
   int VAR_18;

   FUNC_12(&VAR_18);
   FUNC_3(VAR_18, 0);
  }

  return;
 }


 if (VAR_15 < VAR_6) {
  size_t VAR_19 = VAR_9 * VAR_11;
  char VAR_20[8001];

  while (VAR_19) {
   int VAR_21;

   VAR_21 = FUNC_9(VAR_4->cfd, VAR_20,
       VAR_19 > sizeof(VAR_20) ? sizeof(VAR_20) : VAR_19, 0);

   FUNC_4(VAR_21, 0);
   VAR_19 -= VAR_21;
  }
 } else {
  size_t VAR_22 = VAR_9 * VAR_12;

  while (VAR_22) {
   int VAR_23;

   FUNC_0(FUNC_6(VAR_14, 0, VAR_2), 0);
   if (VAR_5)
    VAR_23 = FUNC_11(VAR_4->fd, VAR_14, ((void*)0),
            VAR_22 > VAR_10 ? VAR_10 : VAR_22);
   else
    VAR_23 = FUNC_10(VAR_4->fd, VAR_16,
        VAR_22 > VAR_10 ? VAR_10 : VAR_22, 0);

   FUNC_4(VAR_23, 0);
   VAR_22 -= VAR_23;
  }
 }
}
