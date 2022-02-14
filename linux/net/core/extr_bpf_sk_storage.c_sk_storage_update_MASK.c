
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sock {int sk_omem_alloc; int sk_bpf_storage; } ;
struct bpf_sk_storage_map {int elem_size; } ;
struct bpf_sk_storage_elem {int dummy; } ;
struct bpf_sk_storage_data {int data; } ;
struct bpf_sk_storage {int lock; int list; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bpf_sk_storage_data* FUNC_0 (int) ;
 struct bpf_sk_storage_data* FUNC_1 (struct bpf_sk_storage_elem*) ;
 struct bpf_sk_storage_elem* FUNC_2 (struct bpf_sk_storage_data*) ;
 int FUNC_3 (struct bpf_sk_storage*,struct bpf_sk_storage_elem*) ;
 int FUNC_4 (struct bpf_sk_storage*,struct bpf_sk_storage_elem*,int) ;
 struct bpf_sk_storage_data* FUNC_5 (struct bpf_sk_storage*,struct bpf_sk_storage_map*,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct bpf_sk_storage_data*,int) ;
 int FUNC_8 (struct bpf_map*,int ,void*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct bpf_sk_storage_elem*) ;
 int FUNC_11 (struct bpf_map*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct bpf_sk_storage* FUNC_14 (int ) ;
 struct bpf_sk_storage_elem* FUNC_15 (struct bpf_sk_storage_map*,struct sock*,void*,int) ;
 int FUNC_16 (struct bpf_sk_storage_map*,struct bpf_sk_storage_elem*) ;
 scalar_t__ FUNC_17 (struct bpf_sk_storage_elem*) ;
 int FUNC_18 (struct bpf_sk_storage_elem*) ;
 int FUNC_19 (struct sock*,struct bpf_sk_storage_map*,struct bpf_sk_storage_elem*) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static struct bpf_sk_storage_data *FUNC_21(struct sock *VAR_6,
           struct bpf_map *VAR_7,
           void *VAR_8,
           u64 VAR_9)
{
 struct bpf_sk_storage_data *VAR_10 = ((void*)0);
 struct bpf_sk_storage_elem *VAR_11;
 struct bpf_sk_storage *VAR_12;
 struct bpf_sk_storage_map *VAR_13;
 int VAR_14;


 if (FUNC_20((VAR_9 & ~VAR_1) > VAR_0) ||

     FUNC_20((VAR_9 & VAR_1) && !FUNC_11(VAR_7)))
  return FUNC_0(-VAR_4);

 VAR_13 = (struct bpf_sk_storage_map *)VAR_7;
 VAR_12 = FUNC_14(VAR_6->sk_bpf_storage);
 if (!VAR_12 || FUNC_9(&VAR_12->list)) {

  VAR_14 = FUNC_7(((void*)0), VAR_9);
  if (VAR_14)
   return FUNC_0(VAR_14);

  VAR_11 = FUNC_15(VAR_13, VAR_6, VAR_8, 1);
  if (!VAR_11)
   return FUNC_0(-VAR_5);

  VAR_14 = FUNC_19(VAR_6, VAR_13, VAR_11);
  if (VAR_14) {
   FUNC_10(VAR_11);
   FUNC_6(VAR_13->elem_size, &VAR_6->sk_omem_alloc);
   return FUNC_0(VAR_14);
  }

  return FUNC_1(VAR_11);
 }

 if ((VAR_9 & VAR_1) && !(VAR_9 & VAR_2)) {




  VAR_10 = FUNC_5(VAR_12, VAR_13, 0);
  VAR_14 = FUNC_7(VAR_10, VAR_9);
  if (VAR_14)
   return FUNC_0(VAR_14);
  if (VAR_10 && FUNC_17(FUNC_2(VAR_10))) {
   FUNC_8(VAR_7, VAR_10->data,
           VAR_8, 0);
   return VAR_10;
  }
 }

 FUNC_12(&VAR_12->lock);


 if (FUNC_20(FUNC_9(&VAR_12->list))) {





  VAR_14 = -VAR_3;
  goto unlock_err;
 }

 VAR_10 = FUNC_5(VAR_12, VAR_13, 0);
 VAR_14 = FUNC_7(VAR_10, VAR_9);
 if (VAR_14)
  goto unlock_err;

 if (VAR_10 && (VAR_9 & VAR_1)) {
  FUNC_8(VAR_7, VAR_10->data, VAR_8, 0);
  VAR_11 = FUNC_2(VAR_10);
  goto unlock;
 }
 VAR_11 = FUNC_15(VAR_13, VAR_6, VAR_8, !VAR_10);
 if (!VAR_11) {
  VAR_14 = -VAR_5;
  goto unlock_err;
 }


 FUNC_16(VAR_13, VAR_11);


 FUNC_3(VAR_12, VAR_11);


 if (VAR_10) {
  FUNC_18(FUNC_2(VAR_10));
  FUNC_4(VAR_12, FUNC_2(VAR_10), 0);
 }

unlock:
 FUNC_13(&VAR_12->lock);
 return FUNC_1(VAR_11);

unlock_err:
 FUNC_13(&VAR_12->lock);
 return FUNC_0(VAR_14);
}
