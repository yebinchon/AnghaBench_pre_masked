
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
struct timeval {int tv_sec; int tv_usec; } ;
struct sockaddr {int sa_family; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (int,int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,struct sockaddr*,int ,int) ;
 scalar_t__ FUNC_8 (int,int ,int ,struct timeval*,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_14 ;
 int* VAR_15 ;

__attribute__((used)) static void FUNC_10(struct sockaddr *VAR_16, socklen_t VAR_17, bool VAR_18)
{
 int VAR_19, VAR_20;




 struct timeval VAR_21 = { .tv_sec = 1, .tv_usec = 10 };
 int VAR_22;
 int VAR_23 = 8;


 for (VAR_22 = 0; VAR_22 < VAR_2; ++VAR_22)
  VAR_15[VAR_22] = VAR_22 % 256;


 VAR_19 = FUNC_9(VAR_16->sa_family, VAR_4, VAR_1);
 if (VAR_19 == -1)
  FUNC_2(1, VAR_9, "socket tx_raw");

 VAR_20 = FUNC_9(VAR_16->sa_family, VAR_3, 0);
 if (VAR_20 == -1)
  FUNC_2(1, VAR_9, "socket rx_udp");
 if (FUNC_0(VAR_20, VAR_16, VAR_17))
  FUNC_2(1, VAR_9, "bind");

 if (FUNC_8(VAR_20, VAR_5, VAR_6, &VAR_21, sizeof(VAR_21)))
  FUNC_2(1, VAR_9, "setsockopt rcv timeout");

 for (VAR_13 = VAR_23; VAR_13 < VAR_2;
   VAR_13 += (FUNC_5() % 4096)) {
  if (VAR_8)
   FUNC_4("payload_len: %d\n", VAR_13);

  if (VAR_7) {





   VAR_11 = VAR_23 +
    FUNC_5() % (1500 - VAR_0 - VAR_23);
   FUNC_7(VAR_19, VAR_16, VAR_17, VAR_18);
   FUNC_6(VAR_20);
  } else {






   VAR_11 = VAR_23;
   do {
    FUNC_7(VAR_19, VAR_16, VAR_17, VAR_18);
    FUNC_6(VAR_20);
    VAR_11 += 8 * (FUNC_5() % 8);
   } while (VAR_11 < (1500 - VAR_0) &&
     VAR_11 <= VAR_13);
  }
 }


 if (FUNC_1(VAR_19))
  FUNC_2(1, VAR_9, "close tx_raw");
 if (FUNC_1(VAR_20))
  FUNC_2(1, VAR_9, "close rx_udp");

 if (VAR_8)
  FUNC_4("processed %d messages, %d fragments\n",
   VAR_12, VAR_10);

 FUNC_3(VAR_14, "PASS\n");
}
