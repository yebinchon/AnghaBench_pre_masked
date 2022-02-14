
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sockaddr_in6 {scalar_t__ sin6_port; int sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sk_cookie ;
typedef int s6 ;
typedef int optval ;
typedef int __u64 ;
typedef int __u32 ;
typedef int __s64 ;
typedef scalar_t__ __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,char*,int,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 int FUNC_3 (int,int const*,void*,int ) ;
 int VAR_7 ;
 int FUNC_4 (int,struct sockaddr*,int*) ;
 int FUNC_5 (int,int ,int ,int *,int*) ;
 int VAR_8 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ,int ,int const*,int) ;
 int FUNC_8 (int ,int,int ) ;

__attribute__((used)) static void FUNC_9(int VAR_9, int VAR_10, size_t VAR_11,
      __s64 *VAR_12, __u64 *VAR_13,
      unsigned int VAR_14)
{
 socklen_t VAR_15, VAR_16;
 struct sockaddr_in6 VAR_17;
 const __u32 VAR_18 = 0;
 const int VAR_19 = 1;
 unsigned int VAR_20;
 u64 VAR_21;
 void *VAR_22;
 __s32 VAR_23;
 __s64 VAR_24;
 int VAR_25;

 VAR_17 = VAR_0;
 VAR_17 = VAR_8;
 VAR_17 = 0;
 VAR_16 = sizeof(VAR_17);
 VAR_15 = sizeof(VAR_21);

 for (VAR_20 = 0; VAR_20 < VAR_14; VAR_20++) {
  VAR_24 = FUNC_8(VAR_0, VAR_9, 0);
  FUNC_0(VAR_24 == -1, "socket()",
        "sock_type:%d fd64:%lld errno:%d\n",
        VAR_9, VAR_24, VAR_7);

  VAR_25 = FUNC_7(VAR_24, VAR_4, VAR_6,
     &VAR_19, sizeof(VAR_19));
  FUNC_0(VAR_25 == -1, "setsockopt(SO_REUSEPORT)",
        "err:%d errno:%d\n", VAR_25, VAR_7);


  if (VAR_11 == sizeof(__u64))
   VAR_22 = &VAR_24;
  else {
   FUNC_1(VAR_11 == sizeof(__u32));
   VAR_23 = (__s32)VAR_24;
   VAR_22 = &VAR_23;
  }
  VAR_25 = FUNC_3(VAR_10, &VAR_18, VAR_22, VAR_1);
  FUNC_0(VAR_25 != -1 || VAR_7 != VAR_2,
        "reuseport array update unbound sk",
        "sock_type:%d err:%d errno:%d\n",
        VAR_9, VAR_25, VAR_7);

  VAR_25 = FUNC_2(VAR_24, (struct sockaddr *)&VAR_17, sizeof(VAR_17));
  FUNC_0(VAR_25 == -1, "bind()",
        "sock_type:%d err:%d errno:%d\n", VAR_9, VAR_25, VAR_7);

  if (VAR_20 == 0) {
   VAR_25 = FUNC_4(VAR_24, (struct sockaddr *)&VAR_17,
       &VAR_16);
   FUNC_0(VAR_25 == -1, "getsockname()",
         "sock_type:%d err:%d errno:%d\n",
         VAR_9, VAR_25, VAR_7);
  }

  VAR_25 = FUNC_5(VAR_24, VAR_4, VAR_5, &VAR_21,
     &VAR_15);
  FUNC_0(VAR_25 == -1, "getsockopt(SO_COOKIE)",
        "sock_type:%d err:%d errno:%d\n", VAR_9, VAR_25, VAR_7);

  if (VAR_9 == VAR_3) {




   VAR_25 = FUNC_3(VAR_10, &VAR_18, VAR_22,
        VAR_1);
   FUNC_0(VAR_25 != -1 || VAR_7 != VAR_2,
         "reuseport array update non-listening sk",
         "sock_type:%d err:%d errno:%d\n",
         VAR_9, VAR_25, VAR_7);
   VAR_25 = FUNC_6(VAR_24, 0);
   FUNC_0(VAR_25 == -1, "listen()",
         "sock_type:%d, err:%d errno:%d\n",
         VAR_9, VAR_25, VAR_7);
  }

  VAR_12[VAR_20] = VAR_24;
  VAR_13[VAR_20] = VAR_21;
 }
}
