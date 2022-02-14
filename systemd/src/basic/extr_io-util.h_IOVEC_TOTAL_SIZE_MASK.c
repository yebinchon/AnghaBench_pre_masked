
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {scalar_t__ iov_len; } ;



__attribute__((used)) static inline size_t FUNC_0(const struct iovec *VAR_0, size_t VAR_1) {
        size_t VAR_2, VAR_3 = 0;

        for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
                VAR_3 += VAR_0[VAR_2].iov_len;

        return VAR_3;
}
