
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int *,int *) ;
 scalar_t__ FUNC_1 (int,void*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int VAR_10 ;
 int FUNC_4 (int,int ,char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (int,int ,int ,int*,int) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(bool VAR_12)
{
 int VAR_13, VAR_14;

 VAR_13 = FUNC_8(VAR_8, VAR_9 ? VAR_1 : VAR_0, 0);
 if (VAR_13 == -1)
  FUNC_4(1, VAR_10, "socket");

 VAR_14 = 1 << 21;
 if (FUNC_7(VAR_13, VAR_2, VAR_3, &VAR_14, sizeof(VAR_14)))
  FUNC_4(1, VAR_10, "setsockopt rcvbuf");
 VAR_14 = 1;
 if (FUNC_7(VAR_13, VAR_2, VAR_4, &VAR_14, sizeof(VAR_14)))
  FUNC_4(1, VAR_10, "setsockopt reuseport");

 if (FUNC_1(VAR_13, (void *)&VAR_6, VAR_5))
  FUNC_4(1, VAR_10, "bind");

 if (VAR_12) {
  int VAR_15 = VAR_13;

  if (FUNC_6(VAR_15, 1))
   FUNC_4(1, VAR_10, "listen");

  FUNC_3(VAR_15, VAR_7);
  if (VAR_11)
   FUNC_5(0);

  VAR_13 = FUNC_0(VAR_15, ((void*)0), ((void*)0));
  if (VAR_13 == -1)
   FUNC_4(1, VAR_10, "accept");
  if (FUNC_2(VAR_15))
   FUNC_4(1, VAR_10, "close accept fd");
 }

 return VAR_13;
}
