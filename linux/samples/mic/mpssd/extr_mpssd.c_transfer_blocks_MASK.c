
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_copy_desc {int update_used; scalar_t__ vr_idx; int iovcnt; struct iovec* iov; } ;
struct iovec {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct mic_copy_desc*) ;

__attribute__((used)) static int
FUNC_1(int VAR_1, struct iovec *VAR_2, __u32 VAR_3)
{
 struct mic_copy_desc VAR_4;

 VAR_4.iov = VAR_2;
 VAR_4.iovcnt = VAR_3;
 VAR_4.vr_idx = 0;
 VAR_4.update_used = 0;
 return FUNC_0(VAR_1, VAR_0, &VAR_4);
}
